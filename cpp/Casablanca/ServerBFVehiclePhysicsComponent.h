// Object: ServerBFVehiclePhysicsComponent
// ClassId: 6141
// RuntimeId: 43272
// TypeInfo: 0x0000000144CDB090
#include "../GameServer/ServerVehiclePhysicsComponent.h"

namespace Casablanca {
    class ServerBFVehiclePhysicsComponent : public GameServer::ServerVehiclePhysicsComponent {
        char pad_0xB0[0x8];
    }; // 0xB8
    static_assert(sizeof(ServerBFVehiclePhysicsComponent) == 0xB8);
}