// Object: ServerSupportedShootingComponent
// ClassId: 6047
// RuntimeId: 37632
// TypeInfo: 0x0000000144CE9190
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSupportedShootingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x2E8];
    }; // 0x320
    static_assert(sizeof(ServerSupportedShootingComponent) == 0x320);
}