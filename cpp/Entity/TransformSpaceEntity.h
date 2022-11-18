// Object: TransformSpaceEntity
// ClassId: 8108
// RuntimeId: 62910
// TypeInfo: 0x0000000144ECC9C0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformSpaceEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(TransformSpaceEntity) == 0x60);
}