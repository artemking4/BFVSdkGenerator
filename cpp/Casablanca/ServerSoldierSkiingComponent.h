// Object: ServerSoldierSkiingComponent
// ClassId: 6036
// RuntimeId: 30998
// TypeInfo: 0x0000000144CE9290
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSoldierSkiingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x168];
    }; // 0x1A0
    static_assert(sizeof(ServerSoldierSkiingComponent) == 0x1A0);
}