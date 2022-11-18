// Object: ClientWingComponent
// ClassId: 5801
// RuntimeId: 8880
// TypeInfo: 0x0000000144F6FD30
#include "../GameClient/ClientBoneComponent.h"

namespace Vehicle {
    class ClientWingComponent : public GameClient::ClientBoneComponent {
        char pad_0x38[0x278];
    }; // 0x2B0
    static_assert(sizeof(ClientWingComponent) == 0x2B0);
}