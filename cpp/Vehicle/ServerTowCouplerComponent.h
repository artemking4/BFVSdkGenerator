// Object: ServerTowCouplerComponent
// ClassId: 6049
// RuntimeId: 49146
// TypeInfo: 0x0000000144F6FB30
#include "../GameServer/ServerGameComponent.h"

namespace Vehicle {
    class ServerTowCouplerComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ServerTowCouplerComponent) == 0x90);
}