// Object: ServerDropWeaponComponent
// ClassId: 5984
// RuntimeId: 37469
// TypeInfo: 0x0000000144CE9790
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerDropWeaponComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ServerDropWeaponComponent) == 0x90);
}