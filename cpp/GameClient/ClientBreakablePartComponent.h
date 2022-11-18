// Object: ClientBreakablePartComponent
// ClassId: 5803
// RuntimeId: 55078
// TypeInfo: 0x0000000144E3D870
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientBreakablePartComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xF8];
    }; // 0x130
    static_assert(sizeof(ClientBreakablePartComponent) == 0x130);
}