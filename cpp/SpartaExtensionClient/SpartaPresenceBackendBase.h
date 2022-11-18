// Object: SpartaPresenceBackendBase
// ClassId: 8412
// RuntimeId: 63471
// TypeInfo: 0x0000000144F4AD00
#include "../Online/PresenceBackend.h"

namespace SpartaExtensionClient {
    class SpartaPresenceBackendBase : public Online::PresenceBackend {
        char pad_0x40[0x30];
    }; // 0x70
    static_assert(sizeof(SpartaPresenceBackendBase) == 0x70);
}