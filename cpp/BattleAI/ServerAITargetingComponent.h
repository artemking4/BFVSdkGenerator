// Object: ServerAITargetingComponent
// ClassId: 5940
// RuntimeId: 3944
// TypeInfo: 0x0000000144BF14D0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAITargetingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x88];
    }; // 0xC0
    static_assert(sizeof(ServerAITargetingComponent) == 0xC0);
}