// Object: ServerVehicleEntity
// ClassId: 7954
// RuntimeId: 61973
// TypeInfo: 0x0000000144E62660
#include "../GameServer/ServerControllableEntity.h"

namespace GameServer {
    class ServerVehicleEntity : public GameServer::ServerControllableEntity {
        char pad_0x3B8[0x458];
    }; // 0x810
    static_assert(sizeof(ServerVehicleEntity) == 0x810);
}