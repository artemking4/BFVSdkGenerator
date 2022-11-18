// Object: TransformBuilderEntity
// ClassId: 8100
// RuntimeId: 29577
// TypeInfo: 0x0000000144ECE120
#include "../Entity/Entity.h"

namespace Entity {
    class TransformBuilderEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(TransformBuilderEntity) == 0x90);
}