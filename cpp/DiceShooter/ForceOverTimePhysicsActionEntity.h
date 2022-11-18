// Object: ForceOverTimePhysicsActionEntity
// ClassId: 7183
// RuntimeId: 60404
// TypeInfo: 0x0000000144DDFA60
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ForceOverTimePhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ForceOverTimePhysicsActionEntity) == 0x48);
}