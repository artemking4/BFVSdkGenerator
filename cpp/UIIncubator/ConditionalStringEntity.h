// Object: ConditionalStringEntity
// ClassId: 7083
// RuntimeId: 30053
// TypeInfo: 0x0000000144F6B110
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalStringEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalStringEntity) == 0x60);
}