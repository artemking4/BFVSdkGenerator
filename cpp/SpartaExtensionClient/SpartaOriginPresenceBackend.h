// Object: SpartaOriginPresenceBackend
// ClassId: 8413
// RuntimeId: 58463
// TypeInfo: 0x0000000144F4AD80
#include "../SpartaExtensionClient/SpartaPresenceBackendBase.h"

namespace SpartaExtensionClient {
    class SpartaOriginPresenceBackend : public SpartaExtensionClient::SpartaPresenceBackendBase {
        char pad_0x70[0x8];
    }; // 0x78
    static_assert(sizeof(SpartaOriginPresenceBackend) == 0x78);
}