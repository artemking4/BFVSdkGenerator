// Object: WaypointParameterEvent
// ClassId: 8313
// RuntimeId: 16170
// TypeInfo: 0x0000000144E4E9E0
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class WaypointParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(WaypointParameterEvent) == 0x30);
}