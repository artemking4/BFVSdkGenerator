// Object: ClientTerrainPhysicsComponent
// ClassId: 6112
// RuntimeId: 52330
// TypeInfo: 0x0000000144E43070
#include "../Physics/PhysicsComponent.h"

namespace GameClient {
    class ClientTerrainPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x28];
    }; // 0x90
    static_assert(sizeof(ClientTerrainPhysicsComponent) == 0x90);
}