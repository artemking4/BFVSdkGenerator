// Object: ServerAILocoComponent
// ClassId: 5929
// RuntimeId: 4475
// TypeInfo: 0x0000000144BFD8B0
#include "../BattleAI/IServerAILocoComponent.h"

namespace BattleAI {
    class ServerAILocoComponent : public BattleAI::IServerAILocoComponent {
        char pad_0x38[0x8E8];
    }; // 0x920
    static_assert(sizeof(ServerAILocoComponent) == 0x920);
}