// Object: ServerSquadSpawnComponent
// ClassId: 6044
// RuntimeId: 14774
// TypeInfo: 0x0000000144C40F90
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSquadSpawnComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x2C0];
    }; // 0x2F8
    static_assert(sizeof(ServerSquadSpawnComponent) == 0x2F8);
}