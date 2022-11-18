// Object: DestructionPhysicsComponent
// ClassId: 6115
// RuntimeId: 24561
// TypeInfo: 0x0000000144F10DE0
#include "../Physics/PhysicsComponent.h"

namespace Physics {
    class DestructionPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x70];
    }; // 0xD8
    static_assert(sizeof(DestructionPhysicsComponent) == 0xD8);
}