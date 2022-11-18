// Object: FirstPartyUserEvent
// ClassId: 8418
// RuntimeId: 10532
// TypeInfo: 0x0000000144F05290
#include "../Online/PresenceEvent.h"

namespace Online {
    class FirstPartyUserEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(FirstPartyUserEvent) == 0x10);
}