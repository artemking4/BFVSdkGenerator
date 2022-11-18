// Object: ClientAILocoComponent
// ClassId: 5771
// RuntimeId: 42506
// TypeInfo: 0x0000000144BF3DA0
#include "../GameClient/ClientGameComponent.h"

namespace BattleAI {
    class ClientAILocoComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x848];
    }; // 0x880
    static_assert(sizeof(ClientAILocoComponent) == 0x880);
}