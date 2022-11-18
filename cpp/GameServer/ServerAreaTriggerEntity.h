// Object: ServerAreaTriggerEntity
// ClassId: 7761
// RuntimeId: 16804
// TypeInfo: 0x0000000144E642D0
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerAreaTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x1B0];
    }; // 0x230
    static_assert(sizeof(ServerAreaTriggerEntity) == 0x230);
}