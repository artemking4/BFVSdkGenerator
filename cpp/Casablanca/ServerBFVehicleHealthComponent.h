// Object: ServerBFVehicleHealthComponent
// ClassId: 6086
// RuntimeId: 26348
// TypeInfo: 0x0000000144CDB110
#include "../GameServer/ServerVehicleHealthComponent.h"

namespace Casablanca {
    class ServerBFVehicleHealthComponent : public GameServer::ServerVehicleHealthComponent {
        char pad_0x1B0[0xB0];
    }; // 0x260
    static_assert(sizeof(ServerBFVehicleHealthComponent) == 0x260);
}