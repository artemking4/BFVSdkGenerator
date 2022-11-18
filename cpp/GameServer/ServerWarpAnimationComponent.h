// Object: ServerWarpAnimationComponent
// ClassId: 6057
// RuntimeId: 62900
// TypeInfo: 0x0000000144E5AB80
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerWarpAnimationComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x2A8];
    }; // 0x2E0
    static_assert(sizeof(ServerWarpAnimationComponent) == 0x2E0);
}