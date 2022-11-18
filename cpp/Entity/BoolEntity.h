// Object: BoolEntity
// ClassId: 6278
// RuntimeId: 33329
// TypeInfo: 0x0000000144ED9F20
#include "../Entity/Entity.h"

namespace Entity {
    class BoolEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BoolEntity) == 0x38);
}