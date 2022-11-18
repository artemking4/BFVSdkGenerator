// Object: ServerControllableEntity
// ClassId: 7951
// RuntimeId: 27304
// TypeInfo: 0x0000000144E59B90
#include "../GameServer/ServerPhysicsEntity.h"

namespace GameServer {
    class ServerControllableEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x220];
    }; // 0x3B8
    static_assert(sizeof(ServerControllableEntity) == 0x3B8);
}