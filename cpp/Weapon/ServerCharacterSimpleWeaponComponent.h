// Object: ServerCharacterSimpleWeaponComponent
// ClassId: 5971
// RuntimeId: 8980
// TypeInfo: 0x0000000144F75320
#include "../GameServer/ServerGameComponent.h"

namespace Weapon {
    class ServerCharacterSimpleWeaponComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ServerCharacterSimpleWeaponComponent) == 0x90);
}