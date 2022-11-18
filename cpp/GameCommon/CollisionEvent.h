// Object: CollisionEvent
// ClassId: 8301
// RuntimeId: 45269
// TypeInfo: 0x0000000144E4ED60
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class CollisionEvent : public Entity::EntityEvent {
        char pad_0x10[0x30];
    }; // 0x40
    static_assert(sizeof(CollisionEvent) == 0x40);
}