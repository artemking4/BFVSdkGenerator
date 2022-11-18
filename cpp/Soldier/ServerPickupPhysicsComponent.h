// Object: ServerPickupPhysicsComponent
// ClassId: 6144
// RuntimeId: 38375
// TypeInfo: 0x0000000144F32810
#include "../Physics/PhysicsComponent.h"

namespace Soldier {
    class ServerPickupPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(ServerPickupPhysicsComponent) == 0x70);
}