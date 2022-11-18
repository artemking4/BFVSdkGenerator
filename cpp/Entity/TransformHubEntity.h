// Object: TransformHubEntity
// ClassId: 8102
// RuntimeId: 33492
// TypeInfo: 0x0000000144ECF330
#include "../Entity/Entity.h"

namespace Entity {
    class TransformHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(TransformHubEntity) == 0x50);
}