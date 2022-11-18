// Object: FloatSelectEntity
// ClassId: 7179
// RuntimeId: 8015
// TypeInfo: 0x0000000144ECCBE0
#include "../Entity/Entity.h"

namespace Entity {
    class FloatSelectEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(FloatSelectEntity) == 0x38);
}