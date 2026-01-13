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

#include "Module.h"
#include <interfaces/IMath.h>

namespace Thunder {
namespace Plugin {

    class OutOfProcessImplementation : public Exchange::IMath {
    public:
        OutOfProcessImplementation(const OutOfProcessImplementation&) = delete;
        OutOfProcessImplementation& operator=(const OutOfProcessImplementation&) = delete;
        OutOfProcessImplementation(OutOfProcessImplementation&&) = delete;
        OutOfProcessImplementation& operator=(OutOfProcessImplementation&&) = delete;

        OutOfProcessImplementation()
            : Exchange::IMath()
        {
        }
        ~OutOfProcessImplementation() override = default;

    public:

        BEGIN_INTERFACE_MAP(OutOfProcessImplementation)
            INTERFACE_ENTRY(Exchange::IMath)
        END_INTERFACE_MAP

        // IMath methods

        uint32_t Add(const uint16_t /* A */, const uint16_t /* B */, uint16_t& /* sum */ /* @out */) const override {
            return Core::ERROR_NONE;
        }

        uint32_t Sub(const uint16_t /* A */, const uint16_t /* B */, uint16_t& /* sum */ /* @out */) const override {
            return Core::ERROR_NONE;
        }
    private:

    };

    SERVICE_REGISTRATION(OutOfProcessImplementation, 1, 0)
} // Plugin
} // Thunder