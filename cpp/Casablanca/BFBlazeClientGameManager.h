// Object: BFBlazeClientGameManager
// ClassId: 8406
// RuntimeId: 59668
// TypeInfo: 0x0000000144CF0760
#include "../Online/PresenceBackend.h"

namespace Casablanca {
    class BFBlazeClientGameManager : public Online::PresenceBackend {
        char pad_0x40[0x2B8];
    }; // 0x2F8
    static_assert(sizeof(BFBlazeClientGameManager) == 0x2F8);
}