// Object: ServerDriverComponent
// ClassId: 5981
// RuntimeId: 35147
// TypeInfo: 0x0000000144E59880
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerDriverComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x1A8];
    }; // 0x1E0
    static_assert(sizeof(ServerDriverComponent) == 0x1E0);
}