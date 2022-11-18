// Object: MutualRepulsorPhysicsActionEntity
// ClassId: 7267
// RuntimeId: 33192
// TypeInfo: 0x0000000144DDF400
#include "../Entity/Entity.h"

namespace DiceShooter {
    class MutualRepulsorPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(MutualRepulsorPhysicsActionEntity) == 0x38);
}