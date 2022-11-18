// Object: ServerTrackComponent
// ClassId: 6009
// RuntimeId: 32069
// TypeInfo: 0x0000000144E61FE0
#include "../GameServer/ServerMeshComponent.h"

namespace GameServer {
    class ServerTrackComponent : public GameServer::ServerMeshComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerTrackComponent) == 0x40);
}