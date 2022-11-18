// Object: SimpleBuoyancyPhysicsActionEntity
// ClassId: 7809
// RuntimeId: 45799
// TypeInfo: 0x0000000144DDF0D0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SimpleBuoyancyPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SimpleBuoyancyPhysicsActionEntity) == 0x38);
}