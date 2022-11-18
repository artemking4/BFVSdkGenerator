// Object: GameSettingsReceivedEvent
// ClassId: 8422
// RuntimeId: 43459
// TypeInfo: 0x0000000144CF3550
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class GameSettingsReceivedEvent : public Online::PresenceEvent {
        char pad_0x8[0x38];
    }; // 0x40
    static_assert(sizeof(GameSettingsReceivedEvent) == 0x40);
}