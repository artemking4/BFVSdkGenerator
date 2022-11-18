// Object: ClientCharacterCustomizationComponent
// ClassId: 5809
// RuntimeId: 8573
// TypeInfo: 0x0000000144E39730
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientCharacterCustomizationComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xC30];
    }; // 0xC68
    static_assert(sizeof(ClientCharacterCustomizationComponent) == 0xC68);
}