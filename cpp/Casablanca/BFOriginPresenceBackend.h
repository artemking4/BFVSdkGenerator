// Object: BFOriginPresenceBackend
// ClassId: 8411
// RuntimeId: 49469
// TypeInfo: 0x0000000144CF4E50
#include "../Online/OriginPresenceBackend.h"

namespace Casablanca {
    class BFOriginPresenceBackend : public Online::OriginPresenceBackend {
        char pad_0x3540[0x20];
    }; // 0x3560
    static_assert(sizeof(BFOriginPresenceBackend) == 0x3560);
}