// Object: TransformBlendEntity
// ClassId: 8099
// RuntimeId: 25373
// TypeInfo: 0x0000000144ECEEF0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformBlendEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(TransformBlendEntity) == 0x80);
}