// Object: ServerConsumableTriggerEntity
// ClassId: 7767
// RuntimeId: 17382
// TypeInfo: 0x0000000144CE1460
#include "../GameServer/ServerTriggerEntity.h"

namespace Casablanca {
    class ServerConsumableTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x20];
    }; // 0xA0
    static_assert(sizeof(ServerConsumableTriggerEntity) == 0xA0);
}