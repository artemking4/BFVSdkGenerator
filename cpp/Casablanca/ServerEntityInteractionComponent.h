// Object: ServerEntityInteractionComponent
// ClassId: 5989
// RuntimeId: 57006
// TypeInfo: 0x0000000144CE9710
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerEntityInteractionComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x2F0];
    }; // 0x328
    static_assert(sizeof(ServerEntityInteractionComponent) == 0x328);
}