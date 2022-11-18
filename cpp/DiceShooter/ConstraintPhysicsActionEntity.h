// Object: ConstraintPhysicsActionEntity
// ClassId: 7092
// RuntimeId: 21731
// TypeInfo: 0x0000000144DD4420
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ConstraintPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ConstraintPhysicsActionEntity) == 0xB8);
}