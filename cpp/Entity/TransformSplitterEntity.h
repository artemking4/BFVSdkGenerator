// Object: TransformSplitterEntity
// ClassId: 8109
// RuntimeId: 41489
// TypeInfo: 0x0000000144ECECD0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformSplitterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(TransformSplitterEntity) == 0x60);
}