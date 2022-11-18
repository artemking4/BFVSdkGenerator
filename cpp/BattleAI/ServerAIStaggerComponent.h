// Object: ServerAIStaggerComponent
// ClassId: 5938
// RuntimeId: 37493
// TypeInfo: 0x0000000144BF1550
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAIStaggerComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ServerAIStaggerComponent) == 0xD0);
}