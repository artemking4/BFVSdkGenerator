// Object: ClientAIStaggerComponent
// ClassId: 5775
// RuntimeId: 15217
// TypeInfo: 0x0000000144BF19D0
#include "../GameClient/ClientGameComponent.h"

namespace BattleAI {
    class ClientAIStaggerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xB8];
    }; // 0xF0
    static_assert(sizeof(ClientAIStaggerComponent) == 0xF0);
}