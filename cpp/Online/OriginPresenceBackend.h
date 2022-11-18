// Object: OriginPresenceBackend
// ClassId: 8410
// RuntimeId: 53335
// TypeInfo: 0x0000000144F06C40
#include "../Online/PresenceBackend.h"

namespace Online {
    class OriginPresenceBackend : public Online::PresenceBackend {
        char pad_0x40[0x3500];
    }; // 0x3540
    static_assert(sizeof(OriginPresenceBackend) == 0x3540);
}