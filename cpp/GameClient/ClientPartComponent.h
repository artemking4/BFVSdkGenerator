// Object: ClientPartComponent
// ClassId: 5859
// RuntimeId: 28498
// TypeInfo: 0x0000000144E40D20
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientPartComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ClientPartComponent) == 0xD0);
}