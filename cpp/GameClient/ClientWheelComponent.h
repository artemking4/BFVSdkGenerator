// Object: ClientWheelComponent
// ClassId: 5799
// RuntimeId: 48540
// TypeInfo: 0x0000000144E44100
#include "../GameClient/ClientBoneComponent.h"

namespace GameClient {
    class ClientWheelComponent : public GameClient::ClientBoneComponent {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ClientWheelComponent) == 0x100);
}