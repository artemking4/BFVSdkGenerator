// Object: ServerTerrainPhysicsComponent
// ClassId: 6145
// RuntimeId: 20520
// TypeInfo: 0x0000000144E65060
#include "../Physics/PhysicsComponent.h"

namespace GameServer {
    class ServerTerrainPhysicsComponent : public Physics::PhysicsComponent {
        char pad_0x68[0x18];
    }; // 0x80
    static_assert(sizeof(ServerTerrainPhysicsComponent) == 0x80);
}