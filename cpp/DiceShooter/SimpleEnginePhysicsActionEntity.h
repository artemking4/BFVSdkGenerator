// Object: SimpleEnginePhysicsActionEntity
// ClassId: 7811
// RuntimeId: 13580
// TypeInfo: 0x0000000144DDEFC0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SimpleEnginePhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SimpleEnginePhysicsActionEntity) == 0x38);
}