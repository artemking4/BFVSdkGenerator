// Object: ConditionalFloatEntity
// ClassId: 7079
// RuntimeId: 8038
// TypeInfo: 0x0000000144F6B660
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalFloatEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalFloatEntity) == 0x60);
}