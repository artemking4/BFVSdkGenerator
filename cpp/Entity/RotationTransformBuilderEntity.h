// Object: RotationTransformBuilderEntity
// ClassId: 7364
// RuntimeId: 48715
// TypeInfo: 0x0000000144ECDF00
#include "../Entity/Entity.h"

namespace Entity {
    class RotationTransformBuilderEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(RotationTransformBuilderEntity) == 0x38);
}