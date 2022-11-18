// Object: ServerLockingTargetComponent
// ClassId: 6007
// RuntimeId: 2285
// TypeInfo: 0x0000000144CE9510
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerLockingTargetComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x138];
    }; // 0x170
    static_assert(sizeof(ServerLockingTargetComponent) == 0x170);
}