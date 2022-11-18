// Object: RigidBody
// ClassId: 7301
// RuntimeId: 16173
// TypeInfo: 0x0000000144F115E0
#include "../Physics/PhysicsBody.h"

namespace Physics {
    class RigidBody : public Physics::PhysicsBody {
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(RigidBody) == 0x50);
}