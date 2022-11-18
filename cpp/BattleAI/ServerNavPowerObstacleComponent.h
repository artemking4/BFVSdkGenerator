// Object: ServerNavPowerObstacleComponent
// ClassId: 6013
// RuntimeId: 55185
// TypeInfo: 0x0000000144BEF7E0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerNavPowerObstacleComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x18];
    }; // 0x50
    static_assert(sizeof(ServerNavPowerObstacleComponent) == 0x50);
}