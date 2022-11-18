// Object: PrioritizedBoolEntity
// ClassId: 7321
// RuntimeId: 62750
// TypeInfo: 0x0000000144DB13A0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class PrioritizedBoolEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(PrioritizedBoolEntity) == 0x60);
}