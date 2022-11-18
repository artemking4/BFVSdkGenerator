// Object: PartyEvent
// ClassId: 8429
// RuntimeId: 5988
// TypeInfo: 0x0000000144F05010
#include "../Online/PresenceEvent.h"

namespace Online {
    class PartyEvent : public Online::PresenceEvent {
        char pad_0x8[0x58];
    }; // 0x60
    static_assert(sizeof(PartyEvent) == 0x60);
}