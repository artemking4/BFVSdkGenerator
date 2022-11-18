// Object: ServerWeaponInputRouterComponent
// ClassId: 6059
// RuntimeId: 699
// TypeInfo: 0x0000000144F740E0
#include "../GameServer/ServerGameComponent.h"

namespace Weapon {
    class ServerWeaponInputRouterComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ServerWeaponInputRouterComponent) == 0x70);
}