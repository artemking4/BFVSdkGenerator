// Object: TournamentEvent
// ClassId: 8433
// RuntimeId: 47378
// TypeInfo: 0x0000000144CF3350
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class TournamentEvent : public Online::PresenceEvent {
        char pad_0x8[0xA8];
    }; // 0xB0
    static_assert(sizeof(TournamentEvent) == 0xB0);
}