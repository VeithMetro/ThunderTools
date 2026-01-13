/*
* If not stated otherwise in this file or this component's LICENSE file the
* following copyright and licenses apply:
*
* Copyright 2026 [PLEASE ADD COPYRIGHT NAME!]
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "OutOfProcess.h"
#include <interfaces/json/JMath.h>

namespace Thunder {
namespace Plugin {

    namespace {

        static Metadata<OutOfProcess>metadata(
        // Version
        1, 0, 0,
        // Preconditions
        {},
        // Terminations
        {},
        // Controls
        {}
        );
    }

    const string OutOfProcess::Initialize(PluginHost::IShell* service) {
        string message;

        ASSERT(_service == nullptr);
        ASSERT(service != nullptr);
        ASSERT(_implMath == nullptr);
        ASSERT(_connectionId == 0);

        _service = service;
        _service->AddRef();
        _service->Register(&_notification);

        _implMath = service->Root<Exchange::IMath>(_connectionId, timeout, _T("OutOfProcessImplementation"));
        if (_implMath == nullptr) {
            message = _T("Couldn't create instance of _implMath");
        } else {
            Exchange::JMath::Register(*this, _implMath);
        }

        return (message);
    }

    void OutOfProcess::Deinitialize(PluginHost::IShell* service) {

        ASSERT(_service == service);

        _service->Unregister(&_notification);

        if (_implMath != nullptr) {
            Exchange::JMath::Unregister(*this);

            RPC::IRemoteConnection* connection(service->RemoteConnection(_connectionId));
            VARIABLE_IS_NOT_USED uint32_t result = _implMath->Release();
            _implMath = nullptr;

            ASSERT((result == Core::ERROR_DESTRUCTION_SUCCEEDED) || (result == Core::ERROR_CONNECTION_CLOSED));

            // The process can disappear in the meantime...
            if (connection != nullptr) {
                // But if it did not disappear in the meantime, forcefully terminate it. Shoot to kill
                connection->Terminate();
                connection->Release();
            }
        }

        _service->Release();
        _service = nullptr;
        _connectionId = 0;
    }

    string OutOfProcess::Information() const {
        return (string());
    }

    void OutOfProcess::Deactivated(RPC::IRemoteConnection* connection) {
        if (connection->Id() == _connectionId) {
            ASSERT(_service != nullptr);
            Core::IWorkerPool::Instance().Submit(PluginHost::IShell::Job::Create(_service, PluginHost::IShell::DEACTIVATED, PluginHost::IShell::FAILURE));
            _service->Release();
            _service = nullptr;
            _connectionId = 0;
        }
    }

} // Plugin
} // Thunder