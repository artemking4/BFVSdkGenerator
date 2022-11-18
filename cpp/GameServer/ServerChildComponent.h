// Object: ServerChildComponent
// ClassId: 5956
// RuntimeId: 63158
// TypeInfo: 0x0000000144E620E0
#include "../GameServer/ServerBoneComponent.h"

namespace GameServer {
    class ServerChildComponent : public GameServer::ServerBoneComponent {
        char pad_0x38[0x118];
    }; // 0x150
    static_assert(sizeof(ServerChildComponent) == 0x150);
}