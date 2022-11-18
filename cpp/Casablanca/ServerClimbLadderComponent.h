// Object: ServerClimbLadderComponent
// ClassId: 5972
// RuntimeId: 49118
// TypeInfo: 0x0000000144CDB290
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerClimbLadderComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x178];
    }; // 0x1B0
    static_assert(sizeof(ServerClimbLadderComponent) == 0x1B0);
}