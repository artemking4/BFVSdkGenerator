// Object: ServerVehicleDestroyedTriggerEntity
// ClassId: 7773
// RuntimeId: 30616
// TypeInfo: 0x0000000144CE1BD0
#include "../GameServer/ServerTriggerEntity.h"

namespace Casablanca {
    class ServerVehicleDestroyedTriggerEntity : public GameServer::ServerTriggerEntity {
        char pad_0x80[0x8];
    }; // 0x88
    static_assert(sizeof(ServerVehicleDestroyedTriggerEntity) == 0x88);
}