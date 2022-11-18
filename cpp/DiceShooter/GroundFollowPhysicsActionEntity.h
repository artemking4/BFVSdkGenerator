// Object: GroundFollowPhysicsActionEntity
// ClassId: 7191
// RuntimeId: 20468
// TypeInfo: 0x0000000144DDEA70
#include "../Entity/Entity.h"

namespace DiceShooter {
    class GroundFollowPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(GroundFollowPhysicsActionEntity) == 0xB0);
}