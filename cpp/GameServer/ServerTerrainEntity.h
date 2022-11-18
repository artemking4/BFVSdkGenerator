// Object: ServerTerrainEntity
// ClassId: 7974
// RuntimeId: 43370
// TypeInfo: 0x0000000144E57310
#include "../GameServer/ServerPhysicsEntity.h"

namespace GameServer {
    class ServerTerrainEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x60];
    }; // 0x1F8
    static_assert(sizeof(ServerTerrainEntity) == 0x1F8);
}