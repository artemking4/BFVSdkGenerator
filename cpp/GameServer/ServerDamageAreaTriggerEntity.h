// Object: ServerDamageAreaTriggerEntity
// ClassId: 7768
// RuntimeId: 63717
// TypeInfo: 0x0000000144E63E90
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerDamageAreaTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x30];
    }; // 0xB0
    static_assert(sizeof(ServerDamageAreaTriggerEntity) == 0xB0);
}