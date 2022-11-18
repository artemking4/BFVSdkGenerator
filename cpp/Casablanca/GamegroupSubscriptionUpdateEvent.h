// Object: GamegroupSubscriptionUpdateEvent
// ClassId: 8424
// RuntimeId: 39201
// TypeInfo: 0x0000000144CF3650
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class GamegroupSubscriptionUpdateEvent : public Online::PresenceEvent {
        char pad_0x8[0x18];
    }; // 0x20
    static_assert(sizeof(GamegroupSubscriptionUpdateEvent) == 0x20);
}