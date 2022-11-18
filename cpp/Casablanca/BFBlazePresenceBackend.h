// Object: BFBlazePresenceBackend
// ClassId: 8408
// RuntimeId: 51604
// TypeInfo: 0x0000000144CF06E0
#include "../Online/BlazePresenceBackend.h"

namespace Casablanca {
    class BFBlazePresenceBackend : public Online::BlazePresenceBackend {
        char pad_0xC8[0x70];
    }; // 0x138
    static_assert(sizeof(BFBlazePresenceBackend) == 0x138);
}