// Object: ServerStaticModelGroupEntity
// ClassId: 7973
// RuntimeId: 26729
// TypeInfo: 0x0000000144E57860
#include "../GameServer/ServerPhysicsEntity.h"

namespace GameServer {
    class ServerStaticModelGroupEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x50];
    }; // 0x1E8
    static_assert(sizeof(ServerStaticModelGroupEntity) == 0x1E8);
}