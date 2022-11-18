// Object: GameConfigurationEvent
// ClassId: 8421
// RuntimeId: 44763
// TypeInfo: 0x0000000144CF4ED0
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class GameConfigurationEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(GameConfigurationEvent) == 0x10);
}