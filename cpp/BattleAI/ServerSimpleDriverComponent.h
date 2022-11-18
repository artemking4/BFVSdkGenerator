// Object: ServerSimpleDriverComponent
// ClassId: 6030
// RuntimeId: 55861
// TypeInfo: 0x0000000144BF9C20
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerSimpleDriverComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x1D8];
    }; // 0x210
    static_assert(sizeof(ServerSimpleDriverComponent) == 0x210);
}