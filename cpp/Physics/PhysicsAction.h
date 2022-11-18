// Object: PhysicsAction
// ClassId: 7293
// RuntimeId: 47789
// TypeInfo: 0x0000000144F13C50
#include "../Entity/Entity.h"

namespace Physics {
    class PhysicsAction : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(PhysicsAction) == 0x40);
}