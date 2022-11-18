// Object: GroupPhysicsComponent
// ClassId: 6118
// RuntimeId: 52454
// TypeInfo: 0x0000000144F13930
#include "../Physics/PhysicsComponent.h"

namespace Physics {
    class GroupPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x38];
    }; // 0xA0
    static_assert(sizeof(GroupPhysicsComponent) == 0xA0);
}