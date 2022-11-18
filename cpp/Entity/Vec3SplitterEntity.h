// Object: Vec3SplitterEntity
// ClassId: 8250
// RuntimeId: 34998
// TypeInfo: 0x0000000144ECE890
#include "../Entity/Entity.h"

namespace Entity {
    class Vec3SplitterEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(Vec3SplitterEntity) == 0x58);
}