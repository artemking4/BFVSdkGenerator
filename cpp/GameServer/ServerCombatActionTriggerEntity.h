// Object: ServerCombatActionTriggerEntity
// ClassId: 7766
// RuntimeId: 8416
// TypeInfo: 0x0000000144E640B0
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerCombatActionTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x30];
    }; // 0xB0
    static_assert(sizeof(ServerCombatActionTriggerEntity) == 0xB0);
}