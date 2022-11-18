// Object: GamegroupEvent
// ClassId: 8423
// RuntimeId: 22641
// TypeInfo: 0x0000000144CF3250
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class GamegroupEvent : public Online::PresenceEvent {
        char pad_0x8[0x38];
    }; // 0x40
    static_assert(sizeof(GamegroupEvent) == 0x40);
}