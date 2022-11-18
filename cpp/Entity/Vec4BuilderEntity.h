// Object: Vec4BuilderEntity
// ClassId: 8251
// RuntimeId: 52379
// TypeInfo: 0x0000000144ECE340
#include "../Entity/Entity.h"

namespace Entity {
    class Vec4BuilderEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(Vec4BuilderEntity) == 0x78);
}