// Object: VelocityOnInputPhysicsActionEntity
// ClassId: 8260
// RuntimeId: 40622
// TypeInfo: 0x0000000144DDB870
#include "../Entity/Entity.h"

namespace DiceShooter {
    class VelocityOnInputPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(VelocityOnInputPhysicsActionEntity) == 0x38);
}