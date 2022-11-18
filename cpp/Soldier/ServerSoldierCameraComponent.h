// Object: ServerSoldierCameraComponent
// ClassId: 6032
// RuntimeId: 45689
// TypeInfo: 0x0000000144F32D10
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerSoldierCameraComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x60];
    }; // 0x98
    static_assert(sizeof(ServerSoldierCameraComponent) == 0x98);
}