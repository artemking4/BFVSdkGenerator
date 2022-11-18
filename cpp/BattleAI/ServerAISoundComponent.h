// Object: ServerAISoundComponent
// ClassId: 5936
// RuntimeId: 48915
// TypeInfo: 0x0000000144BF1650
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAISoundComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ServerAISoundComponent) == 0x88);
}