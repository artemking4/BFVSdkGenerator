// Object: ServerOwnedGameComponentEntity
// ClassId: 7945
// RuntimeId: 31329
// TypeInfo: 0x0000000144DAA8E0
#include "../GameServer/ServerGameComponentEntity.h"

namespace DiceCommons {
    class ServerOwnedGameComponentEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0x10];
    }; // 0x188
    static_assert(sizeof(ServerOwnedGameComponentEntity) == 0x188);
}