// Object: AntiGravityPhysicsActionEntity
// ClassId: 6187
// RuntimeId: 64304
// TypeInfo: 0x0000000144DD4640
#include "../Entity/Entity.h"

namespace DiceShooter {
    class AntiGravityPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(AntiGravityPhysicsActionEntity) == 0x38);
}