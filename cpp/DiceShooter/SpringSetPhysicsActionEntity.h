// Object: SpringSetPhysicsActionEntity
// ClassId: 8061
// RuntimeId: 31783
// TypeInfo: 0x0000000144DDEC90
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SpringSetPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(SpringSetPhysicsActionEntity) == 0x50);
}