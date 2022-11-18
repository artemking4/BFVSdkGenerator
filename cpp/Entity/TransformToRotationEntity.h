// Object: TransformToRotationEntity
// ClassId: 8110
// RuntimeId: 50424
// TypeInfo: 0x0000000144ECDCE0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformToRotationEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(TransformToRotationEntity) == 0x58);
}