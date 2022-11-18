// Object: ClientAIProjectileComponent
// ClassId: 5772
// RuntimeId: 51203
// TypeInfo: 0x0000000144BF1AD0
#include "../GameClient/ClientGameComponent.h"

namespace BattleAI {
    class ClientAIProjectileComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x118];
    }; // 0x150
    static_assert(sizeof(ClientAIProjectileComponent) == 0x150);
}