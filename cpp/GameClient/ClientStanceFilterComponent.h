// Object: ClientStanceFilterComponent
// ClassId: 5896
// RuntimeId: 44036
// TypeInfo: 0x0000000144E44300
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientStanceFilterComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x80];
    }; // 0xB8
    static_assert(sizeof(ClientStanceFilterComponent) == 0xB8);
}