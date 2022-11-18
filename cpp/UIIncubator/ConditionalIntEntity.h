// Object: ConditionalIntEntity
// ClassId: 7081
// RuntimeId: 55769
// TypeInfo: 0x0000000144F6B770
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalIntEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalIntEntity) == 0x60);
}