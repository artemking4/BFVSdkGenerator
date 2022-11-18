// Object: ClientIKComponent
// ClassId: 5842
// RuntimeId: 27412
// TypeInfo: 0x0000000144E44480
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientIKComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientIKComponent) == 0x48);
}