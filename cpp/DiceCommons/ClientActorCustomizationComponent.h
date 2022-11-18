// Object: ClientActorCustomizationComponent
// ClassId: 5776
// RuntimeId: 7640
// TypeInfo: 0x0000000144DAA0F0
#include "../GameClient/ClientGameComponent.h"

namespace DiceCommons {
    class ClientActorCustomizationComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x348];
    }; // 0x380
    static_assert(sizeof(ClientActorCustomizationComponent) == 0x380);
}