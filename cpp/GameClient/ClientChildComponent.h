// Object: ClientChildComponent
// ClassId: 5795
// RuntimeId: 40490
// TypeInfo: 0x0000000144E353D0
#include "../GameClient/ClientBoneComponent.h"

namespace GameClient {
    class ClientChildComponent : public GameClient::ClientBoneComponent {
        char pad_0x38[0x2D8];
    }; // 0x310
    static_assert(sizeof(ClientChildComponent) == 0x310);
}