// Object: ServerSoldierWeaponsComponent
// ClassId: 6040
// RuntimeId: 38670
// TypeInfo: 0x0000000144F32B10
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerSoldierWeaponsComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x12B8];
    }; // 0x12F0
    static_assert(sizeof(ServerSoldierWeaponsComponent) == 0x12F0);
}