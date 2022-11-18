// Object: Vec2SplitterEntity
// ClassId: 8246
// RuntimeId: 4251
// TypeInfo: 0x0000000144ECE9A0
#include "../Entity/Entity.h"

namespace Entity {
    class Vec2SplitterEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(Vec2SplitterEntity) == 0x50);
}