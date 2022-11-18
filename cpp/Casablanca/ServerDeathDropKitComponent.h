// Object: ServerDeathDropKitComponent
// ClassId: 5979
// RuntimeId: 3692
// TypeInfo: 0x0000000144CDB190
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerDeathDropKitComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(ServerDeathDropKitComponent) == 0xA0);
}