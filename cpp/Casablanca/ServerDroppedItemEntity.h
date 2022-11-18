// Object: ServerDroppedItemEntity
// ClassId: 7940
// RuntimeId: 41831
// TypeInfo: 0x0000000144C3BA70
#include "../GameServer/ServerGameComponentEntity.h"

namespace Casablanca {
    class ServerDroppedItemEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0xE8];
    }; // 0x260
    static_assert(sizeof(ServerDroppedItemEntity) == 0x260);
}