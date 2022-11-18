// Object: ServerBangerHealthModule
// ClassId: 5952
// RuntimeId: 43343
// TypeInfo: 0x0000000144E65460
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerBangerHealthModule : public GameServer::ServerGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerBangerHealthModule) == 0x40);
}