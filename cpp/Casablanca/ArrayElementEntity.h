// Object: ArrayElementEntity
// ClassId: 6189
// RuntimeId: 183
// TypeInfo: 0x0000000144CE2C90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ArrayElementEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ArrayElementEntity) == 0x40);
}