// Object: SimpleHeliPhysicsActionEntity
// ClassId: 7813
// RuntimeId: 31259
// TypeInfo: 0x0000000144DDEEB0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SimpleHeliPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x110];
    }; // 0x130
    static_assert(sizeof(SimpleHeliPhysicsActionEntity) == 0x130);
}