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
            Core::instance_id _parameter_fdd61544InstanceId__ = reader.Number<Core::instance_id>();

            PluginHost::IShell* _parameter_fdd61544{};
            ProxyStub::UnknownProxy* _parameter_fdd61544Proxy__ = nullptr;
            if (_parameter_fdd61544InstanceId__ != 0) {
                _parameter_fdd61544Proxy__ = RPC::Administrator::Instance().ProxyInstance(channel, _parameter_fdd61544InstanceId__, false, _parameter_fdd61544);
                ASSERT((_parameter_fdd61544 != nullptr) && (_parameter_fdd61544Proxy__ != nullptr));
            }

            uint32_t result = implementation->StartParser(_parameter_fdd61544);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (_parameter_fdd61544Proxy__ != nullptr) {
                RPC::Administrator::Instance().Release(_parameter_fdd61544Proxy__, message->Response());
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
            const string _parameter_52b80414 = reader.Text();

            const string result = implementation->GetCurrentProgram(static_cast<const string&>(_parameter_52b80414));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (4) virtual const string GetAudioLanguages(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _parameter_0065768f = reader.Number<uint32_t>();

            const string result = implementation->GetAudioLanguages(_parameter_0065768f);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _parameter_9bc872c1 = reader.Number<uint32_t>();

            const string result = implementation->GetSubtitleLanguages(_parameter_9bc872c1);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_ceb13c6c = reader.Text();
            const string _parameter_fa7ac21e = reader.Text();

            bool result = implementation->SetParentalControlPin(static_cast<const string&>(_parameter_ceb13c6c), static_cast<const string&>(_parameter_fa7ac21e));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (7) virtual bool SetParentalControl(const string&, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_82fb8e90 = reader.Text();
            const bool _parameter_217cad53 = reader.Boolean();

            bool result = implementation->SetParentalControl(static_cast<const string&>(_parameter_82fb8e90), _parameter_217cad53);

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
            const string _parameter_6879ba9e = reader.Text();
            const bool _parameter_7ed103d0 = reader.Boolean();
            const string _parameter_4109556d = reader.Text();

            bool result = implementation->SetParentalLock(static_cast<const string&>(_parameter_6879ba9e), _parameter_7ed103d0, static_cast<const string&>(_parameter_4109556d));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (10) virtual bool IsParentalLocked(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_03043f4d = reader.Text();

            bool result = implementation->IsParentalLocked(static_cast<const string&>(_parameter_03043f4d));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (11) virtual void Register(Exchange::IGuide::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Core::instance_id _parameter_1348f73eInstanceId__ = reader.Number<Core::instance_id>();

            Exchange::IGuide::INotification* _parameter_1348f73e{};
            ProxyStub::UnknownProxy* _parameter_1348f73eProxy__ = nullptr;
            if (_parameter_1348f73eInstanceId__ != 0) {
                _parameter_1348f73eProxy__ = RPC::Administrator::Instance().ProxyInstance(channel, _parameter_1348f73eInstanceId__, false, _parameter_1348f73e);
                ASSERT((_parameter_1348f73e != nullptr) && (_parameter_1348f73eProxy__ != nullptr));
            }

            implementation->Register(_parameter_1348f73e);

            if (_parameter_1348f73eProxy__ != nullptr) {
                RPC::Administrator::Instance().Release(_parameter_1348f73eProxy__, message->Response());
            }
        },

        // (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Core::instance_id _parameter_01e5a3bcInstanceId__ = reader.Number<Core::instance_id>();

            Exchange::IGuide::INotification* _parameter_01e5a3bc{};
            ProxyStub::UnknownProxy* _parameter_01e5a3bcProxy__ = nullptr;
            if (_parameter_01e5a3bcInstanceId__ != 0) {
                _parameter_01e5a3bcProxy__ = RPC::Administrator::Instance().ProxyInstance(channel, _parameter_01e5a3bcInstanceId__, false, _parameter_01e5a3bc);
                ASSERT((_parameter_01e5a3bc != nullptr) && (_parameter_01e5a3bcProxy__ != nullptr));
            }

            implementation->Unregister(_parameter_01e5a3bc);

            if (_parameter_01e5a3bcProxy__ != nullptr) {
                RPC::Administrator::Instance().Release(_parameter_01e5a3bcProxy__, message->Response());
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
            const string _parameter_401aae15 = reader.Text();

            implementation->ParentalLockChanged(static_cast<const string&>(_parameter_401aae15));
        },

        // (4) virtual void TestNotification(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_49918a23 = reader.Text();

            implementation->TestNotification(static_cast<const string&>(_parameter_49918a23));
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

        uint32_t StartParser(PluginHost::IShell* _parameter_fdd61544) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_fdd61544));

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

        const string GetCurrentProgram(const string& _parameter_52b80414) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_52b80414);

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

        const string GetAudioLanguages(const uint32_t _parameter_0065768f) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_parameter_0065768f);

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

        const string GetSubtitleLanguages(const uint32_t _parameter_9bc872c1) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_parameter_9bc872c1);

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

        bool SetParentalControlPin(const string& _parameter_ceb13c6c, const string& _parameter_fa7ac21e) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_ceb13c6c);
            writer.Text(_parameter_fa7ac21e);

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

        bool SetParentalControl(const string& _parameter_82fb8e90, const bool _parameter_217cad53) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(7));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_82fb8e90);
            writer.Boolean(_parameter_217cad53);

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

        bool SetParentalLock(const string& _parameter_6879ba9e, const bool _parameter_7ed103d0, const string& _parameter_4109556d) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(9));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_6879ba9e);
            writer.Boolean(_parameter_7ed103d0);
            writer.Text(_parameter_4109556d);

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

        bool IsParentalLocked(const string& _parameter_03043f4d) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(10));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_03043f4d);

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

        void Register(Exchange::IGuide::INotification* _parameter_1348f73e) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(11));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_1348f73e));

            const Core::hresult hresult = static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());

                _Complete(reader);
            } else {
                ASSERT((hresult & COM_ERROR) != 0);
            }
        }

        void Unregister(Exchange::IGuide::INotification* _parameter_01e5a3bc) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(12));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_01e5a3bc));

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

        void ParentalLockChanged(const string& _parameter_401aae15) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_401aae15);

            static_cast<const ProxyStub::UnknownProxy&>(*this).Invoke(message);
        }

        void TestNotification(const string& _parameter_49918a23) override
        {
            IPCMessage message(static_cast<const ProxyStub::UnknownProxy&>(*this).Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_parameter_49918a23);

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
