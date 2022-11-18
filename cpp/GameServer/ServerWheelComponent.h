// Object: ServerWheelComponent
// ClassId: 5960
// RuntimeId: 63788
// TypeInfo: 0x0000000144E621E0
#include "../GameServer/ServerBoneComponent.h"

namespace GameServer {
    class ServerWheelComponent : public GameServer::ServerBoneComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ServerWheelComponent) == 0x88);
}