// Object: ServerWingComponent
// ClassId: 5962
// RuntimeId: 4634
// TypeInfo: 0x0000000144F6F2C0
#include "../GameServer/ServerBoneComponent.h"

namespace Vehicle {
    class ServerWingComponent : public GameServer::ServerBoneComponent {
        char pad_0x38[0x60];
    }; // 0x98
    static_assert(sizeof(ServerWingComponent) == 0x98);
}