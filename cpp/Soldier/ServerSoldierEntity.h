// Object: ServerSoldierEntity
// ClassId: 7953
// RuntimeId: 2436
// TypeInfo: 0x0000000144F30310
#include "../GameServer/ServerCharacterEntity.h"

namespace Soldier {
    class ServerSoldierEntity : public GameServer::ServerCharacterEntity {
        char pad_0x650[0x6E0];
    }; // 0xD30
    static_assert(sizeof(ServerSoldierEntity) == 0xD30);
}