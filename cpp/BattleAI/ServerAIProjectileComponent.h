// Object: ServerAIProjectileComponent
// ClassId: 5934
// RuntimeId: 11967
// TypeInfo: 0x0000000144BF16D0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAIProjectileComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xD8];
    }; // 0x110
    static_assert(sizeof(ServerAIProjectileComponent) == 0x110);
}