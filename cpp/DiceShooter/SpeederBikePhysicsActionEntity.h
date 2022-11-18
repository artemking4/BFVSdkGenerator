// Object: SpeederBikePhysicsActionEntity
// ClassId: 8057
// RuntimeId: 30756
// TypeInfo: 0x0000000144DDEDA0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SpeederBikePhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x170];
    }; // 0x190
    static_assert(sizeof(SpeederBikePhysicsActionEntity) == 0x190);
}