// Object: ServerAISpottingComponent
// ClassId: 5937
// RuntimeId: 56062
// TypeInfo: 0x0000000144BF15D0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAISpottingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ServerAISpottingComponent) == 0x88);
}