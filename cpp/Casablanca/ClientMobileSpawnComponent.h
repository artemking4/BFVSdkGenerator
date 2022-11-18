// Object: ClientMobileSpawnComponent
// ClassId: 5855
// RuntimeId: 50953
// TypeInfo: 0x0000000144CB6310
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientMobileSpawnComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x88];
    }; // 0xC0
    static_assert(sizeof(ClientMobileSpawnComponent) == 0xC0);
}