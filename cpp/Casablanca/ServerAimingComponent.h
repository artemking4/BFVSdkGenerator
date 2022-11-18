// Object: ServerAimingComponent
// ClassId: 5946
// RuntimeId: 12971
// TypeInfo: 0x0000000144C40F10
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerAimingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x6A8];
    }; // 0x6E0
    static_assert(sizeof(ServerAimingComponent) == 0x6E0);
}