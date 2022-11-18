// Object: ServerSoldierGripComponent
// ClassId: 6033
// RuntimeId: 54465
// TypeInfo: 0x0000000144F30210
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerSoldierGripComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(ServerSoldierGripComponent) == 0xA0);
}