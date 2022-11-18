// Object: ClientAISpottingComponent
// ClassId: 5774
// RuntimeId: 62791
// TypeInfo: 0x0000000144BF1A50
#include "../GameClient/ClientGameComponent.h"

namespace BattleAI {
    class ClientAISpottingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x78];
    }; // 0xB0
    static_assert(sizeof(ClientAISpottingComponent) == 0xB0);
}