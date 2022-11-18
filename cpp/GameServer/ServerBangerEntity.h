// Object: ServerBangerEntity
// ClassId: 7949
// RuntimeId: 47869
// TypeInfo: 0x0000000144E57530
#include "../GameServer/ServerPhysicsEntity.h"

namespace GameServer {
    class ServerBangerEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x188];
    }; // 0x320
    static_assert(sizeof(ServerBangerEntity) == 0x320);
}