// Object: WorldRelSteeringPhysicsActionEntity
// ClassId: 8281
// RuntimeId: 32199
// TypeInfo: 0x0000000144DDB760
#include "../Entity/Entity.h"

namespace DiceShooter {
    class WorldRelSteeringPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(WorldRelSteeringPhysicsActionEntity) == 0x38);
}