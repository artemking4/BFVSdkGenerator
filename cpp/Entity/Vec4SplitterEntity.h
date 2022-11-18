// Object: Vec4SplitterEntity
// ClassId: 8254
// RuntimeId: 16271
// TypeInfo: 0x0000000144ECE780
#include "../Entity/Entity.h"

namespace Entity {
    class Vec4SplitterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(Vec4SplitterEntity) == 0x60);
}