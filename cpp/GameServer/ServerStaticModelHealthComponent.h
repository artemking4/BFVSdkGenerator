// Object: ServerStaticModelHealthComponent
// ClassId: 6092
// RuntimeId: 54415
// TypeInfo: 0x0000000144E65260
#include "../GameServer/ServerGameHealthComponent.h"

namespace GameServer {
    class ServerStaticModelHealthComponent : public GameServer::ServerGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerStaticModelHealthComponent) == 0x38);
}