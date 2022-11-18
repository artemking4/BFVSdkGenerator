// Object: HorsePropulsionPhysicsActionEntity
// ClassId: 7196
// RuntimeId: 34129
// TypeInfo: 0x0000000144DDF840
#include "../Entity/Entity.h"

namespace DiceShooter {
    class HorsePropulsionPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(HorsePropulsionPhysicsActionEntity) == 0x60);
}