// Object: RagdollPhysicsComponent
// ClassId: 6143
// RuntimeId: 45531
// TypeInfo: 0x0000000144F12E00
#include "../Physics/PhysicsComponent.h"

namespace Physics {
    class RagdollPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x1B8];
    }; // 0x220
    static_assert(sizeof(RagdollPhysicsComponent) == 0x220);
}