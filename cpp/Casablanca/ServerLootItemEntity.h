// Object: ServerLootItemEntity
// ClassId: 7943
// RuntimeId: 29987
// TypeInfo: 0x0000000144C5E360
#include "../GameServer/ServerGameComponentEntity.h"

namespace Casablanca {
    class ServerLootItemEntity : public GameServer::ServerGameComponentEntity {
        char pad_0x178[0x188];
    }; // 0x300
    static_assert(sizeof(ServerLootItemEntity) == 0x300);
}