// Object: ClientFlapComponent
// ClassId: 5797
// RuntimeId: 53083
// TypeInfo: 0x0000000144F6FE30
#include "../GameClient/ClientBoneComponent.h"

namespace Vehicle {
    class ClientFlapComponent : public GameClient::ClientBoneComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientFlapComponent) == 0x90);
}