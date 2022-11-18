// Object: SplineMoverEntity
// ClassId: 8059
// RuntimeId: 52756
// TypeInfo: 0x0000000144DAA4A0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class SplineMoverEntity : public Entity::Entity {
        char pad_0x20[0x110];
    }; // 0x130
    static_assert(sizeof(SplineMoverEntity) == 0x130);
}