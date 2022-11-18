// Object: ServerSoldierSuppressionComponent
// ClassId: 6038
// RuntimeId: 1043
// TypeInfo: 0x0000000144DCF3F0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerSoldierSuppressionComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xD8];
    }; // 0x110
    static_assert(sizeof(ServerSoldierSuppressionComponent) == 0x110);
}