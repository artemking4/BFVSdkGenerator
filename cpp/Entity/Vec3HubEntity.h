// Object: Vec3HubEntity
// ClassId: 8248
// RuntimeId: 47661
// TypeInfo: 0x0000000144ECF660
#include "../Entity/Entity.h"

namespace Entity {
    class Vec3HubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(Vec3HubEntity) == 0x50);
}