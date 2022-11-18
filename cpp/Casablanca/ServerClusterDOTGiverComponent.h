// Object: ServerClusterDOTGiverComponent
// ClassId: 5974
// RuntimeId: 51482
// TypeInfo: 0x0000000144CDB210
#include "../GameServer/ServerClusterDOTBaseComponent.h"

namespace Casablanca {
    class ServerClusterDOTGiverComponent : public GameServer::ServerClusterDOTBaseComponent {
        char pad_0x38[0xB0];
    }; // 0xE8
    static_assert(sizeof(ServerClusterDOTGiverComponent) == 0xE8);
}