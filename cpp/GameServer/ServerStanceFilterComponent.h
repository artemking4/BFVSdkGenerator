// Object: ServerStanceFilterComponent
// ClassId: 6045
// RuntimeId: 26596
// TypeInfo: 0x0000000144E623E0
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerStanceFilterComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x80];
    }; // 0xB8
    static_assert(sizeof(ServerStanceFilterComponent) == 0xB8);
}