// Object: ServerVehicleHealthComponent
// ClassId: 6085
// RuntimeId: 17291
// TypeInfo: 0x0000000144E61EE0
#include "../GameServer/ServerControllableHealthComponent.h"

namespace GameServer {
    class ServerVehicleHealthComponent : public GameServer::ServerControllableHealthComponent {
        char pad_0x48[0x168];
    }; // 0x1B0
    static_assert(sizeof(ServerVehicleHealthComponent) == 0x1B0);
}