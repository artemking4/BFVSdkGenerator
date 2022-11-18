// Object: ClientUnlockComponent
// ClassId: 5906
// RuntimeId: 27300
// TypeInfo: 0x0000000144E39130
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientUnlockComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ClientUnlockComponent) == 0x100);
}