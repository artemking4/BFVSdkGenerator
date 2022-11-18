// Object: RollOnInputPhysicsActionEntity
// ClassId: 7361
// RuntimeId: 47763
// TypeInfo: 0x0000000144DDF1E0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class RollOnInputPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(RollOnInputPhysicsActionEntity) == 0x38);
}