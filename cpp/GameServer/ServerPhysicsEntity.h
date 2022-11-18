// Object: ServerPhysicsEntity
// ClassId: 7947
// RuntimeId: 27481
// TypeInfo: 0x0000000144E587B0
#include "../GameServer/ServerGameComponentEntity.h"

namespace GameServer {
    class ServerPhysicsEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0x20];
    }; // 0x198
    static_assert(sizeof(ServerPhysicsEntity) == 0x198);
}