// Object: PhysicsConstraint
// ClassId: 7305
// RuntimeId: 31239
// TypeInfo: 0x0000000144F13190
#include "../Entity/Entity.h"

namespace Physics {
    class PhysicsConstraint : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(PhysicsConstraint) == 0x30);
}