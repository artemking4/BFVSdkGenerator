// Object: KillSwitchesReceivedEvent
// ClassId: 8425
// RuntimeId: 53709
// TypeInfo: 0x0000000144CF35D0
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class KillSwitchesReceivedEvent : public Online::PresenceEvent {
        char pad_0x8[0x28];
    }; // 0x30
    static_assert(sizeof(KillSwitchesReceivedEvent) == 0x30);
}