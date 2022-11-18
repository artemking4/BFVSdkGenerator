// Object: Or4Entity
// ClassId: 7288
// RuntimeId: 9324
// TypeInfo: 0x0000000144ED0DC0
#include "../Entity/Entity.h"

namespace Entity {
    class Or4Entity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(Or4Entity) == 0x38);
}