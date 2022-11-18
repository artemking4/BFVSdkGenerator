// Object: ServerArtilleryAimingComponent
// ClassId: 5951
// RuntimeId: 44590
// TypeInfo: 0x0000000144CDB510
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerArtilleryAimingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ServerArtilleryAimingComponent) == 0x48);
}