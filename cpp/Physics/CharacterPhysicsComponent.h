// Object: CharacterPhysicsComponent
// ClassId: 6103
// RuntimeId: 46463
// TypeInfo: 0x0000000144F139B0
#include "../Physics/PhysicsComponent.h"

namespace Physics {
    class CharacterPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x28];
    }; // 0x90
    static_assert(sizeof(CharacterPhysicsComponent) == 0x90);
}