// Object: ServerRotorComponent
// ClassId: 6026
// RuntimeId: 16889
// TypeInfo: 0x0000000144E62460
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerRotorComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x20];
    }; // 0x58
    static_assert(sizeof(ServerRotorComponent) == 0x58);
}