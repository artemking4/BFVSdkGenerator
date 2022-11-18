// Object: ClientEffectComponent
// ClassId: 5821
// RuntimeId: 57648
// TypeInfo: 0x0000000144E41120
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientEffectComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xE8];
    }; // 0x120
    static_assert(sizeof(ClientEffectComponent) == 0x120);
}