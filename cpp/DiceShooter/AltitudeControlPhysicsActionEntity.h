// Object: AltitudeControlPhysicsActionEntity
// ClassId: 6180
// RuntimeId: 23838
// TypeInfo: 0x0000000144DD4750
#include "../Entity/Entity.h"

namespace DiceShooter {
    class AltitudeControlPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(AltitudeControlPhysicsActionEntity) == 0x48);
}