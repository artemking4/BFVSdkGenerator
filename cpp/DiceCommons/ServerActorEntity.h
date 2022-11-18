// Object: ServerActorEntity
// ClassId: 7948
// RuntimeId: 1289
// TypeInfo: 0x0000000144DAAD20
#include "../GameServer/ServerPhysicsEntity.h"

namespace DiceCommons {
    class ServerActorEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0xF8];
    }; // 0x290
    static_assert(sizeof(ServerActorEntity) == 0x290);
}