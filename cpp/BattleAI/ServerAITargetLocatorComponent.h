// Object: ServerAITargetLocatorComponent
// ClassId: 5939
// RuntimeId: 41629
// TypeInfo: 0x0000000144BFBEE0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAITargetLocatorComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ServerAITargetLocatorComponent) == 0x90);
}