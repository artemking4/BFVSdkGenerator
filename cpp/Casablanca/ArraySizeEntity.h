// Object: ArraySizeEntity
// ClassId: 6190
// RuntimeId: 48812
// TypeInfo: 0x0000000144CE2B80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ArraySizeEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ArraySizeEntity) == 0x50);
}