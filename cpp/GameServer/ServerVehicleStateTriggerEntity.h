// Object: ServerVehicleStateTriggerEntity
// ClassId: 7774
// RuntimeId: 13672
// TypeInfo: 0x0000000144E63500
#include "../GameServer/ServerTriggerEntity.h"

namespace GameServer {
    class ServerVehicleStateTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x40];
    }; // 0xC0
    static_assert(sizeof(ServerVehicleStateTriggerEntity) == 0xC0);
}