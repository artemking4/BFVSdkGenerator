// Object: ConditionalTransformEntity
// ClassId: 7084
// RuntimeId: 13537
// TypeInfo: 0x0000000144F6B220
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConditionalTransformEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ConditionalTransformEntity) == 0x60);
}