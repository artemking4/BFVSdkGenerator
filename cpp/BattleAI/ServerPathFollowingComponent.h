// Object: ServerPathFollowingComponent
// ClassId: 6019
// RuntimeId: 45164
// TypeInfo: 0x0000000144BF9BA0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerPathFollowingComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ServerPathFollowingComponent) == 0x88);
}