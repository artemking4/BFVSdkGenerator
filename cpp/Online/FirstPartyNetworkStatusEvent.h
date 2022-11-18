// Object: FirstPartyNetworkStatusEvent
// ClassId: 8417
// RuntimeId: 25284
// TypeInfo: 0x0000000144F05190
#include "../Online/PresenceEvent.h"

namespace Online {
    class FirstPartyNetworkStatusEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(FirstPartyNetworkStatusEvent) == 0x10);
}