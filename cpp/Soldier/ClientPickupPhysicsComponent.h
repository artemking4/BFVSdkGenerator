// Object: ClientPickupPhysicsComponent
// ClassId: 6111
// RuntimeId: 871
// TypeInfo: 0x0000000144F36160
#include "../Physics/PhysicsComponent.h"

namespace Soldier {
    class ClientPickupPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x20];
    }; // 0x88
    static_assert(sizeof(ClientPickupPhysicsComponent) == 0x88);
}