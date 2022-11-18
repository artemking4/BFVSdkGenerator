// Object: ServerCharacterSpawnEntity
// ClassId: 8038
// RuntimeId: 19609
// TypeInfo: 0x0000000144E60080
#include "../GameServer/ServerSpawnEntity.h"

namespace GameServer {
    class ServerCharacterSpawnEntity : public GameServer::ServerSpawnEntity {
        char pad_0x378[0x58];
    }; // 0x3D0
    static_assert(sizeof(ServerCharacterSpawnEntity) == 0x3D0);
}