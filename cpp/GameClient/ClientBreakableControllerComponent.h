// Object: ClientBreakableControllerComponent
// ClassId: 5802
// RuntimeId: 45775
// TypeInfo: 0x0000000144E34260
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientBreakableControllerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x528];
    }; // 0x560
    static_assert(sizeof(ClientBreakableControllerComponent) == 0x560);
}