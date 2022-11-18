// Object: PlayTogetherEvent
// ClassId: 8430
// RuntimeId: 35259
// TypeInfo: 0x0000000144CF33D0
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class PlayTogetherEvent : public Online::PresenceEvent {
        char pad_0x8[0x10];
    }; // 0x18
    static_assert(sizeof(PlayTogetherEvent) == 0x18);
}