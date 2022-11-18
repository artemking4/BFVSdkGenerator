// Object: ServerStaticModelEntity
// ClassId: 7970
// RuntimeId: 11904
// TypeInfo: 0x0000000144E57420
#include "../GameServer/ServerPhysicsEntity.h"

namespace GameServer {
    class ServerStaticModelEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x78];
    }; // 0x210
    static_assert(sizeof(ServerStaticModelEntity) == 0x210);
}