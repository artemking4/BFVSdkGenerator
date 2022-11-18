// Object: ServerEdgeModelComponent
// ClassId: 5986
// RuntimeId: 52411
// TypeInfo: 0x0000000144E5E290
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerEdgeModelComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x60];
    }; // 0x98
    static_assert(sizeof(ServerEdgeModelComponent) == 0x98);
}