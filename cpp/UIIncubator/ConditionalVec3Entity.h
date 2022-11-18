// Object: ConditionalVec3Entity
// ClassId: 7086
// RuntimeId: 41998
// TypeInfo: 0x0000000144F6B440
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalVec3Entity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalVec3Entity) == 0x60);
}