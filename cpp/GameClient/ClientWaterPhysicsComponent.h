// Object: ClientWaterPhysicsComponent
// ClassId: 6113
// RuntimeId: 31475
// TypeInfo: 0x0000000144E42FF0
#include "../Physics/PhysicsComponent.h"

namespace GameClient {
    class ClientWaterPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x20];
    }; // 0x88
    static_assert(sizeof(ClientWaterPhysicsComponent) == 0x88);
}