// Object: Vec2BuilderEntity
// ClassId: 8243
// RuntimeId: 30619
// TypeInfo: 0x0000000144ECE560
#include "../Entity/Entity.h"

namespace Entity {
    class Vec2BuilderEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(Vec2BuilderEntity) == 0x58);
}