// Object: ServerBFSoldierSpawnEntity
// ClassId: 8039
// RuntimeId: 38062
// TypeInfo: 0x0000000144C3C400
#include "../GameServer/ServerCharacterSpawnEntity.h"

namespace Casablanca {
    class ServerBFSoldierSpawnEntity : public GameServer::ServerCharacterSpawnEntity {
        char pad_0x3D0[0x30];
    }; // 0x400
    static_assert(sizeof(ServerBFSoldierSpawnEntity) == 0x400);
}