// Object: ClientRotorComponent
// ClassId: 5871
// RuntimeId: 56015
// TypeInfo: 0x0000000144E44380
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientRotorComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x88];
    }; // 0xC0
    static_assert(sizeof(ClientRotorComponent) == 0xC0);
}