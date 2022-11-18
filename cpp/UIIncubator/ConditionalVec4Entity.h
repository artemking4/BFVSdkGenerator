// Object: ConditionalVec4Entity
// ClassId: 7087
// RuntimeId: 63651
// TypeInfo: 0x0000000144F6B330
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalVec4Entity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalVec4Entity) == 0x60);
}