// Object: ServerDeathAreaTriggerEntity
// ClassId: 7769
// RuntimeId: 39113
// TypeInfo: 0x0000000144E63D80
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerDeathAreaTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x40];
    }; // 0xC0
    static_assert(sizeof(ServerDeathAreaTriggerEntity) == 0xC0);
}