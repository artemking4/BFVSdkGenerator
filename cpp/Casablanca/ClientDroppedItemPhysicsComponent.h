// Object: ClientDroppedItemPhysicsComponent
// ClassId: 6110
// RuntimeId: 17636
// TypeInfo: 0x0000000144C460D0
#include "../Physics/PhysicsComponent.h"

namespace Casablanca {
    class ClientDroppedItemPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x28];
    }; // 0x90
    static_assert(sizeof(ClientDroppedItemPhysicsComponent) == 0x90);
}