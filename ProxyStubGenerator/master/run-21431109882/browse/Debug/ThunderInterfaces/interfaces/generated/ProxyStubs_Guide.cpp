//
// generated automatically from "IGuide.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IGuide
//   - class Exchange::IGuide::INotification
//

#include "Module.h"
#include "IGuide.h"

#include <com/com.h>

namespace Thunder {

namespace ProxyStubs {

    PUSH_WARNING(DISABLE_WARNING_DEPRECATED_USE)
    PUSH_WARNING(DISABLE_WARNING_TYPE_LIMITS)

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IGuide interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t StartParser(PluginHost::IShell*) = 0
    //  (1) virtual const string GetChannels() = 0
    //  (2) virtual const string GetPrograms() = 0
    //  (3) virtual const string GetCurrentProgram(const string&) = 0
    //  (4) virtual const string GetAudioLanguages(const uint32_t) = 0
    //  (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
    //  (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
    //  (7) virtual bool SetParentalControl(const string&, const bool) = 0
    //  (8) virtual bool IsParentalControlled() = 0
    //  (9) virtual bool SetParentalLock(const string&, const bool, const string&) = 0
    //  (10) virtual bool IsParentalLocked(const string&) = 0
    //  (11) virtual void Register(Exchange::IGuide::INotification*) = 0
    //  (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
    //

    static ProxyStub::MethodHandler ExchangeGuideStubMethods[] = {
        // (0) virtual uint32_t StartParser(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Core::instance_id _parameter_b313ec8fInstanceId__ = reader.Number<Core::instance_id>();

            PluginHost::IShell* _parameter_b313ec8f{};
            ProxyStub::UnknownProxy* _parameter_b313ec8fProxy__ = nullptr;
            if (_parameter_b313ec8fInstanceId__ != 0) {
                _parameter_b313ec8fProxy__ = RPC::Administrator::Instance().ProxyInstance(channel, _parameter_b313ec8fInstanceId__, false, _parameter_b313ec8f);
                ASSERT((_parameter_b313ec8f != nullptr) && (_parameter_b313ec8fProxy__ != nullptr));
            }

            uint32_t result = implementation->StartParser(_parameter_b313ec8f);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (_parameter_b313ec8fProxy__ != nullptr) {
                RPC::Administrator::Instance().Release(_parameter_b313ec8fProxy__, message->Response());
            }
        },

        // (1) virtual const string GetChannels() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            const string result = implementation->GetChannels();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (2) virtual const string GetPrograms() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            const string result = implementation->GetPrograms();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual const string GetCurrentProgram(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_c589d496 = reader.Text();

            const string result = implementation->GetCurrentProgram(static_cast<const string&>(_parameter_c589d496));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (4) virtual const string GetAudioLanguages(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _parameter_b11bc34f = reader.Number<uint32_t>();

            const string result = implementation->GetAudioLanguages(_parameter_b11bc34f);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _parameter_6d71d3c3 = reader.Number<uint32_t>();

            const string result = implementation->GetSubtitleLanguages(_parameter_6d71d3c3);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_bc29f82a = reader.Text();
            const string _parameter_4af217fd = reader.Text();

            bool result = implementation->SetParentalControlPin(static_cast<const string&>(_parameter_bc29f82a), static_cast<const string&>(_parameter_4af217fd));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (7) virtual bool SetParentalControl(const string&, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_513b4d80 = reader.Text();
            const bool _parameter_8cca5ad5 = reader.Boolean();

            bool result = implementation->SetParentalControl(static_cast<const string&>(_parameter_513b4d80), _parameter_8cca5ad5);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (8) virtual bool IsParentalControlled() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsParentalControlled();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (9) virtual bool SetParentalLock(const string&, const bool, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_d92956c5 = reader.Text();
            const bool _parameter_9336cdc9 = reader.Boolean();
            const string _parameter_75fb3b2a = reader.Text();

            bool result = implementation->SetParentalLock(static_cast<const string&>(_parameter_d92956c5), _parameter_9336cdc9, static_cast<const string&>(_parameter_75fb3b2a));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (10) virtual bool IsParentalLocked(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_7674f87b = reader.Text();

            bool result = implementation->IsParentalLocked(static_cast<const string&>(_parameter_7674f87b));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (11) virtual void Register(Exchange::IGuide::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Core::instance_id _parameter_a6c03bffInstanceId__ = reader.Number<Core::instance_id>();

            Exchange::IGuide::INotification* _parameter_a6c03bff{};
            ProxyStub::UnknownProxy* _parameter_a6c03bffProxy__ = nullptr;
            if (_parameter_a6c03bffInstanceId__ != 0) {
                _parameter_a6c03bffProxy__ = RPC::Administrator::Instance().ProxyInstance(channel, _parameter_a6c03bffInstanceId__, false, _parameter_a6c03bff);
                ASSERT((_parameter_a6c03bff != nullptr) && (_parameter_a6c03bffProxy__ != nullptr));
            }

            implementation->Register(_parameter_a6c03bff);

            if (_parameter_a6c03bffProxy__ != nullptr) {
                RPC::Administrator::Instance().Release(_parameter_a6c03bffProxy__, message->Response());
            }
        },

        // (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Core::instance_id _parameter_66972be0InstanceId__ = reader.Number<Core::instance_id>();

            Exchange::IGuide::INotification* _parameter_66972be0{};
            ProxyStub::UnknownProxy* _parameter_66972be0Proxy__ = nullptr;
            if (_parameter_66972be0InstanceId__ != 0) {
                _parameter_66972be0Proxy__ = RPC::Administrator::Instance().ProxyInstance(channel, _parameter_66972be0InstanceId__, false, _parameter_66972be0);
                ASSERT((_parameter_66972be0 != nullptr) && (_parameter_66972be0Proxy__ != nullptr));
            }

            implementation->Unregister(_parameter_66972be0);

            if (_parameter_66972be0Proxy__ != nullptr) {
                RPC::Administrator::Instance().Release(_parameter_66972be0Proxy__, message->Response());
            }
        }
        , nullptr
    }; // ExchangeGuideStubMethods

    //
    // Exchange::IGuide::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void EITBroadcast() = 0
    //  (1) virtual void EmergencyAlert() = 0
    //  (2) virtual void ParentalControlChanged() = 0
    //  (3) virtual void ParentalLockChanged(const string&) = 0
    //  (4) virtual void TestNotification(const string&) = 0
    //

    static ProxyStub::MethodHandler ExchangeGuideNotificationStubMethods[] = {
        // (0) virtual void EITBroadcast() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->EITBroadcast();
        },

        // (1) virtual void EmergencyAlert() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->EmergencyAlert();
        },

        // (2) virtual void ParentalControlChanged() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->ParentalControlChanged();
        },

        // (3) virtual void ParentalLockChanged(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_041e595e = reader.Text();

            implementation->ParentalLockChanged(static_cast<const string&>(_parameter_041e595e));
        },

        // (4) virtual void TestNotification(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_0f63a8d5 = reader.Text();

            implementation->TestNotification(static_cast<const string&>(_parameter_0f63a8d5));
        }
        , nullptr
    }; // ExchangeGuideNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IGuide interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t StartParser(PluginHost::IShell*) = 0
    //  (1) virtual const string GetChannels() = 0
    //  (2) virtual const string GetPrograms() = 0
    //  (3) virtual const string GetCurrentProgram(const string&) = 0
    //  (4) virtual const string GetAudioLanguages(const uint32_t) = 0
    //  (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
    //  (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
    //  (7) virtual bool SetParentalControl(const string&, const bool) = 0
    //  (8) virtual bool IsParentalControlled() = 0
    //  (9) virtual bool SetParentalLock(const string&, const bool, const string&) = 0
    //  (10) virtual bool IsParentalLocked(const string&) = 0
    //  (11) virtual void Register(Exchange::IGuide::INotification*) = 0
    //  (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
    //

    class ExchangeGuideProxy final : public ProxyStub::UnknownProxyType<Exchange::IGuide> {
    public:
        ExchangeGuideProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t StartParser(PluginHost::IShell* _parameter_b313ec8f) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_b313ec8f));

            uint32_t result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();

                _Complete(reader);
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        const string GetChannels() override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(1));

            string result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        const string GetPrograms() override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(2));

            string result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        const string GetCurrentProgram(const string& _parameter_c589d496) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_c589d496);

            string result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        const string GetAudioLanguages(const uint32_t _parameter_b11bc34f) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_parameter_b11bc34f);

            string result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        const string GetSubtitleLanguages(const uint32_t _parameter_6d71d3c3) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_parameter_6d71d3c3);

            string result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        bool SetParentalControlPin(const string& _parameter_bc29f82a, const string& _parameter_4af217fd) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_bc29f82a);
            writer.Text(_parameter_4af217fd);

            bool result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        bool SetParentalControl(const string& _parameter_513b4d80, const bool _parameter_8cca5ad5) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(7));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_513b4d80);
            writer.Boolean(_parameter_8cca5ad5);

            bool result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        bool IsParentalControlled() override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(8));

            bool result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        bool SetParentalLock(const string& _parameter_d92956c5, const bool _parameter_9336cdc9, const string& _parameter_75fb3b2a) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(9));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_d92956c5);
            writer.Boolean(_parameter_9336cdc9);
            writer.Text(_parameter_75fb3b2a);

            bool result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        bool IsParentalLocked(const string& _parameter_7674f87b) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(10));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_7674f87b);

            bool result{};

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }

            return (result);
        }

        void Register(Exchange::IGuide::INotification* _parameter_a6c03bff) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(11));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_a6c03bff));

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());

                _Complete(reader);
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }
        }

        void Unregister(Exchange::IGuide::INotification* _parameter_66972be0) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(12));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_66972be0));

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());

                _Complete(reader);
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }
        }

    private:
        uint32_t _Complete(RPC::Data::Frame::Reader& reader) const
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = static_cast<const ProxyStub::UnknownProxy&>(*this).Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

    }; // class ExchangeGuideProxy

    //
    // Exchange::IGuide::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void EITBroadcast() = 0
    //  (1) virtual void EmergencyAlert() = 0
    //  (2) virtual void ParentalControlChanged() = 0
    //  (3) virtual void ParentalLockChanged(const string&) = 0
    //  (4) virtual void TestNotification(const string&) = 0
    //

    class ExchangeGuideNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IGuide::INotification> {
    public:
        ExchangeGuideNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void EITBroadcast() override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(0));

            static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
        }

        void EmergencyAlert() override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(1));

            static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
        }

        void ParentalControlChanged() override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(2));

            static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
        }

        void ParentalLockChanged(const string& _parameter_041e595e) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_041e595e);

            static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
        }

        void TestNotification(const string& _parameter_0f63a8d5) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_0f63a8d5);

            static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
        }

    }; // class ExchangeGuideNotificationProxy

    POP_WARNING()
    POP_WARNING()

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------
    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IGuide, ExchangeGuideStubMethods> ExchangeGuideStub;
        typedef ProxyStub::UnknownStubType<Exchange::IGuide::INotification, ExchangeGuideNotificationStubMethods> ExchangeGuideNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IGuide, ExchangeGuideProxy, ExchangeGuideStub>();
                RPC::Administrator::Instance().Announce<Exchange::IGuide::INotification, ExchangeGuideNotificationProxy, ExchangeGuideNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IGuide>();
                RPC::Administrator::Instance().Recall<Exchange::IGuide::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
