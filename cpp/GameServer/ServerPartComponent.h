// Object: ServerPartComponent
// ClassId: 6015
// RuntimeId: 60263
// TypeInfo: 0x0000000144E64F60
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerPartComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xA0];
    }; // 0xD8
    static_assert(sizeof(ServerPartComponent) == 0xD8);
}