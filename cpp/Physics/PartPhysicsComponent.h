// Object: PartPhysicsComponent
// ClassId: 6121
// RuntimeId: 52628
// TypeInfo: 0x0000000144F13730
#include "../Physics/PhysicsComponent.h"

namespace Physics {
    class PartPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x40];
    }; // 0xA8
    static_assert(sizeof(PartPhysicsComponent) == 0xA8);
}