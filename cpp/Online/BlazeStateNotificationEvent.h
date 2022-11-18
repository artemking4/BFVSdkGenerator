// Object: BlazeStateNotificationEvent
// ClassId: 8415
// RuntimeId: 43456
// TypeInfo: 0x0000000144EFF530
#include "../Online/PresenceEvent.h"

namespace Online {
    class BlazeStateNotificationEvent : public Online::PresenceEvent {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(BlazeStateNotificationEvent) == 0x10);
}