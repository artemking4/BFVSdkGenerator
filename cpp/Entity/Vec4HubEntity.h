// Object: Vec4HubEntity
// ClassId: 8252
// RuntimeId: 56595
// TypeInfo: 0x0000000144ECF550
#include "../Entity/Entity.h"

namespace Entity {
    class Vec4HubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(Vec4HubEntity) == 0x50);
}