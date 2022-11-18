// Object: ServerCharacterEntity
// ClassId: 7952
// RuntimeId: 45637
// TypeInfo: 0x0000000144E5B080
#include "../GameServer/ServerControllableEntity.h"

namespace GameServer {
    class ServerCharacterEntity : public GameServer::ServerControllableEntity {
        char pad_0x3B8[0x298];
    }; // 0x650
    static_assert(sizeof(ServerCharacterEntity) == 0x650);
}