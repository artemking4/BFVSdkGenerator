// Object: ServerMovementComponent
// ClassId: 6012
// RuntimeId: 41191
// TypeInfo: 0x0000000144F32E10
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerMovementComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xD8];
    }; // 0x110
    static_assert(sizeof(ServerMovementComponent) == 0x110);
}