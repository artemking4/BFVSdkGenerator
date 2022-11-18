// Object: ForcePhysicsActionEntity
// ClassId: 7184
// RuntimeId: 1992
// TypeInfo: 0x0000000144DDF950
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ForcePhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ForcePhysicsActionEntity) == 0x38);
}