// Object: ServerBangerHealthComponent
// ClassId: 6078
// RuntimeId: 40192
// TypeInfo: 0x0000000144E654E0
#include "../GameServer/ServerGameHealthComponent.h"

namespace GameServer {
    class ServerBangerHealthComponent : public GameServer::ServerGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerBangerHealthComponent) == 0x38);
}