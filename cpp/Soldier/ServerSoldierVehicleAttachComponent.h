// Object: ServerSoldierVehicleAttachComponent
// ClassId: 6039
// RuntimeId: 27705
// TypeInfo: 0x0000000144F32B90
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerSoldierVehicleAttachComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x40];
    }; // 0x78
    static_assert(sizeof(ServerSoldierVehicleAttachComponent) == 0x78);
}