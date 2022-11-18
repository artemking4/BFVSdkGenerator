// Object: EntityParameterEvent
// ClassId: 8305
// RuntimeId: 40282
// TypeInfo: 0x0000000144E4EC60
#include "../Entity/EntityEvent.h"

namespace GameCommon {
    class EntityParameterEvent : public Entity::EntityEvent {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(EntityParameterEvent) == 0x18);
}