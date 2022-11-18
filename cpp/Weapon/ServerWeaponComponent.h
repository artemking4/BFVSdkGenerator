// Object: ServerWeaponComponent
// ClassId: 5959
// RuntimeId: 62857
// TypeInfo: 0x0000000144F74060
#include "../GameServer/ServerBoneComponent.h"

namespace Weapon {
    class ServerWeaponComponent : public GameServer::ServerBoneComponent {
        char pad_0x38[0x2D8];
    }; // 0x310
    static_assert(sizeof(ServerWeaponComponent) == 0x310);
}