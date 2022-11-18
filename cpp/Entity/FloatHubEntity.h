// Object: FloatHubEntity
// ClassId: 7176
// RuntimeId: 16576
// TypeInfo: 0x0000000144ECF880
#include "../Entity/Entity.h"

namespace Entity {
    class FloatHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(FloatHubEntity) == 0x50);
}