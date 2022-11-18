// Object: ServerSpecialMovesComponent
// ClassId: 6041
// RuntimeId: 59387
// TypeInfo: 0x0000000144CE9210
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerSpecialMovesComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x608];
    }; // 0x640
    static_assert(sizeof(ServerSpecialMovesComponent) == 0x640);
}