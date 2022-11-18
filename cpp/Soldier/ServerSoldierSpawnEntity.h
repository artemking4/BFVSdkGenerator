// Object: ServerSoldierSpawnEntity
// ClassId: 8041
// RuntimeId: 54750
// TypeInfo: 0x0000000144F2E800
#include "../GameServer/ServerCharacterSpawnEntity.h"

namespace Soldier {
    class ServerSoldierSpawnEntity : public GameServer::ServerCharacterSpawnEntity {
        char pad_0x3D0[0x10];
    }; // 0x3E0
    static_assert(sizeof(ServerSoldierSpawnEntity) == 0x3E0);
}