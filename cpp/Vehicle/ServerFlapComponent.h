// Object: ServerFlapComponent
// ClassId: 5958
// RuntimeId: 59645
// TypeInfo: 0x0000000144F6FCB0
#include "../GameServer/ServerBoneComponent.h"

namespace Vehicle {
    class ServerFlapComponent : public GameServer::ServerBoneComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerFlapComponent) == 0x40);
}