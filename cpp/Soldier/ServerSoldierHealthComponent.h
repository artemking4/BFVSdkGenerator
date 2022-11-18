// Object: ServerSoldierHealthComponent
// ClassId: 6082
// RuntimeId: 48384
// TypeInfo: 0x0000000144F32C10
#include "../GameServer/ServerCharacterHealthComponent.h"

namespace Soldier {
    class ServerSoldierHealthComponent : public GameServer::ServerCharacterHealthComponent {
        char pad_0x70[0x28];
    }; // 0x98
    static_assert(sizeof(ServerSoldierHealthComponent) == 0x98);
}