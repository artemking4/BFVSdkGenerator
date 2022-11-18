// Object: ServerStaticModelGroupHealthComponent
// ClassId: 6091
// RuntimeId: 42827
// TypeInfo: 0x0000000144E652E0
#include "../GameServer/ServerGameHealthComponent.h"

namespace GameServer {
    class ServerStaticModelGroupHealthComponent : public GameServer::ServerGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerStaticModelGroupHealthComponent) == 0x38);
}