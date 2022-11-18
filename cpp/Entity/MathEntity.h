// Object: MathEntity
// ClassId: 7257
// RuntimeId: 50135
// TypeInfo: 0x0000000144ED0CB0
#include "../Entity/Entity.h"

namespace Entity {
    class MathEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(MathEntity) == 0x70);
}