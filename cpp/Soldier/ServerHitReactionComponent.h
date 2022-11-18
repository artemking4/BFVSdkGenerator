// Object: ServerHitReactionComponent
// ClassId: 6003
// RuntimeId: 11089
// TypeInfo: 0x0000000144F32E90
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerHitReactionComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x198];
    }; // 0x1D0
    static_assert(sizeof(ServerHitReactionComponent) == 0x1D0);
}