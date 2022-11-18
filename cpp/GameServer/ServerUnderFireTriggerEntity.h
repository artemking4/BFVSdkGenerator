// Object: ServerUnderFireTriggerEntity
// ClassId: 7772
// RuntimeId: 54757
// TypeInfo: 0x0000000144E63610
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerUnderFireTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x200];
    }; // 0x280
    static_assert(sizeof(ServerUnderFireTriggerEntity) == 0x280);
}