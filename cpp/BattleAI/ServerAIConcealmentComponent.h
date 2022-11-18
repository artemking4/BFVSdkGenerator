// Object: ServerAIConcealmentComponent
// ClassId: 5931
// RuntimeId: 58995
// TypeInfo: 0x0000000144BF1850
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAIConcealmentComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ServerAIConcealmentComponent) == 0x48);
}