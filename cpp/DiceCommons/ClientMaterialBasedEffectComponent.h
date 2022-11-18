// Object: ClientMaterialBasedEffectComponent
// ClassId: 5849
// RuntimeId: 35178
// TypeInfo: 0x0000000144DAA070
#include "../GameClient/ClientGameComponent.h"

namespace DiceCommons {
    class ClientMaterialBasedEffectComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x3E8];
    }; // 0x420
    static_assert(sizeof(ClientMaterialBasedEffectComponent) == 0x420);
}