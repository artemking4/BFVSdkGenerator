// Object: ServerVehicleSpawnEntity
// ClassId: 8042
// RuntimeId: 59761
// TypeInfo: 0x0000000144E5FF70
#include "../GameServer/ServerSpawnEntity.h"

namespace GameServer {
    class ServerVehicleSpawnEntity : public GameServer::ServerSpawnEntity {
        char pad_0x378[0x48];
    }; // 0x3C0
    static_assert(sizeof(ServerVehicleSpawnEntity) == 0x3C0);
}