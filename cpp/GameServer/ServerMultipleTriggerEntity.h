// Object: ServerMultipleTriggerEntity
// ClassId: 7771
// RuntimeId: 20276
// TypeInfo: 0x0000000144E63A50
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerMultipleTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x8];
    }; // 0x88
    static_assert(sizeof(ServerMultipleTriggerEntity) == 0x88);
}