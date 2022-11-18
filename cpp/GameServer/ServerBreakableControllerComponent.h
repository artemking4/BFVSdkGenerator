// Object: ServerBreakableControllerComponent
// ClassId: 5963
// RuntimeId: 57785
// TypeInfo: 0x0000000144E5E410
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerBreakableControllerComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ServerBreakableControllerComponent) == 0x88);
}