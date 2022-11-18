// Object: ClientSimpleAnimationControlComponent
// ClassId: 5876
// RuntimeId: 63456
// TypeInfo: 0x0000000144CD3BE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSimpleAnimationControlComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xF8];
    }; // 0x130
    static_assert(sizeof(ClientSimpleAnimationControlComponent) == 0x130);
}