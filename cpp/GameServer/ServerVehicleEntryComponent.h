// Object: ServerVehicleEntryComponent
// ClassId: 5994
// RuntimeId: 8946
// TypeInfo: 0x0000000144E61F60
#include "../GameServer/ServerPlayerEntryComponent.h"

namespace GameServer {
    class ServerVehicleEntryComponent : public GameServer::ServerPlayerEntryComponent {
        char pad_0xF8[0x98];
    }; // 0x190
    static_assert(sizeof(ServerVehicleEntryComponent) == 0x190);
}