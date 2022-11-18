// Object: MotionDampingPhysicsActionEntity
// ClassId: 7263
// RuntimeId: 58285
// TypeInfo: 0x0000000144DDF510
#include "../Entity/Entity.h"

namespace DiceShooter {
    class MotionDampingPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(MotionDampingPhysicsActionEntity) == 0x38);
}