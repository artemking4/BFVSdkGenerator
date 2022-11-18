// Object: Vec2HubEntity
// ClassId: 8244
// RuntimeId: 2256
// TypeInfo: 0x0000000144ECF770
#include "../Entity/Entity.h"

namespace Entity {
    class Vec2HubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(Vec2HubEntity) == 0x50);
}