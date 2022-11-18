// Object: ServerWeaponZeroingComponent
// ClassId: 6060
// RuntimeId: 57142
// TypeInfo: 0x0000000144F32A90
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerWeaponZeroingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ServerWeaponZeroingComponent) == 0x68);
}