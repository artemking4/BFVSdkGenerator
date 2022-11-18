// Object: ServerBlockSpottingComponent
// ClassId: 5953
// RuntimeId: 43615
// TypeInfo: 0x0000000144CDB310
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerBlockSpottingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerBlockSpottingComponent) == 0x40);
}