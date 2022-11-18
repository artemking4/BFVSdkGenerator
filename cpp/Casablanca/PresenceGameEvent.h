// Object: PresenceGameEvent
// ClassId: 8431
// RuntimeId: 28697
// TypeInfo: 0x0000000144CF34D0
#include "../Online/PresenceEvent.h"

namespace Casablanca {
    class PresenceGameEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(PresenceGameEvent) == 0x10);
}