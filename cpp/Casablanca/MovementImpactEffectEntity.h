// Object: MovementImpactEffectEntity
// ClassId: 7264
// RuntimeId: 1923
// TypeInfo: 0x0000000144C21E80
#include "../Entity/Entity.h"

namespace Casablanca {
    class MovementImpactEffectEntity : public Entity::Entity {
        char pad_0x20[0x1150];
    }; // 0x1170
    static_assert(sizeof(MovementImpactEffectEntity) == 0x1170);
}