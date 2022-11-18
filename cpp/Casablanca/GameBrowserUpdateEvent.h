// Object: GameBrowserUpdateEvent
// ClassId: 8420
// RuntimeId: 50066
// TypeInfo: 0x0000000144CF4F50
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class GameBrowserUpdateEvent : public Online::PresenceEvent {
        char pad_0x8[0x10];
    }; // 0x18
    static_assert(sizeof(GameBrowserUpdateEvent) == 0x18);
}