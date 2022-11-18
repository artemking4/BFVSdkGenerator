// Object: ServerMobileSpawnComponent
// ClassId: 6011
// RuntimeId: 17658
// TypeInfo: 0x0000000144C40E90
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerMobileSpawnComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ServerMobileSpawnComponent) == 0xD0);
}