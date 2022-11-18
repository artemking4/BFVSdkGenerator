// Object: ConditionalVec2Entity
// ClassId: 7085
// RuntimeId: 35388
// TypeInfo: 0x0000000144F6B550
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalVec2Entity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalVec2Entity) == 0x60);
}