// Object: ServerTimedFuseComponent
// ClassId: 6048
// RuntimeId: 35478
// TypeInfo: 0x0000000144CE9110
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerTimedFuseComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x18];
    }; // 0x50
    static_assert(sizeof(ServerTimedFuseComponent) == 0x50);
}