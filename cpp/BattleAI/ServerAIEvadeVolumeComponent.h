// Object: ServerAIEvadeVolumeComponent
// ClassId: 5933
// RuntimeId: 32030
// TypeInfo: 0x0000000144BF1750
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAIEvadeVolumeComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerAIEvadeVolumeComponent) == 0x40);
}