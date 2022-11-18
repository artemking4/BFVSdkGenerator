// Object: PhysicsConstraintOwner
// ClassId: 7306
// RuntimeId: 1504
// TypeInfo: 0x0000000144F13080
#include "../Entity/Entity.h"

namespace Physics {
    class PhysicsConstraintOwner : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(PhysicsConstraintOwner) == 0x48);
}