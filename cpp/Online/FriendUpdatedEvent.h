// Object: FriendUpdatedEvent
// ClassId: 8419
// RuntimeId: 44064
// TypeInfo: 0x0000000144F05210
#include "../Online/PresenceEvent.h"

namespace Online {
    class FriendUpdatedEvent : public Online::PresenceEvent {
        char pad_0x8[0x18];
    }; // 0x20
    static_assert(sizeof(FriendUpdatedEvent) == 0x20);
}