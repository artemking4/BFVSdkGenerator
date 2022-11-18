// Object: CameraRelSteeringPhysicsActionEntity
// ClassId: 6286
// RuntimeId: 15650
// TypeInfo: 0x0000000144DD4530
#include "../Entity/Entity.h"

namespace DiceShooter {
    class CameraRelSteeringPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(CameraRelSteeringPhysicsActionEntity) == 0xC0);
}