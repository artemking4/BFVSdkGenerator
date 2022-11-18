// Object: ServerBreakableModelEntity
// ClassId: 7950
// RuntimeId: 20350
// TypeInfo: 0x0000000144E5E7C0
#include "../GameServer/ServerPhysicsEntity.h"

namespace GameServer {
    class ServerBreakableModelEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x20];
    }; // 0x1B8
    static_assert(sizeof(ServerBreakableModelEntity) == 0x1B8);
}