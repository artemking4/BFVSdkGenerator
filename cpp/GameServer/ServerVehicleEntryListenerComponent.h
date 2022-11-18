// Object: ServerVehicleEntryListenerComponent
// ClassId: 6053
// RuntimeId: 12303
// TypeInfo: 0x0000000144E5AC00
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerVehicleEntryListenerComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x498];
    }; // 0x4D0
    static_assert(sizeof(ServerVehicleEntryListenerComponent) == 0x4D0);
}