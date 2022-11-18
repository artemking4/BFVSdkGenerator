// Object: OnlineStatusEvent
// ClassId: 8428
// RuntimeId: 54782
// TypeInfo: 0x0000000144F05110
#include "../Online/PresenceEvent.h"

namespace Online {
    class OnlineStatusEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(OnlineStatusEvent) == 0x10);
}