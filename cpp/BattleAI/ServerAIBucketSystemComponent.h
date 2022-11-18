// Object: ServerAIBucketSystemComponent
// ClassId: 5930
// RuntimeId: 50719
// TypeInfo: 0x0000000144BF18D0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAIBucketSystemComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x18];
    }; // 0x50
    static_assert(sizeof(ServerAIBucketSystemComponent) == 0x50);
}