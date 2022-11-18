// Object: ServerAIEntryComponent
// ClassId: 5932
// RuntimeId: 5170
// TypeInfo: 0x0000000144BF17D0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerAIEntryComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xE0];
    }; // 0x118
    static_assert(sizeof(ServerAIEntryComponent) == 0x118);
}