// Object: ClientInputDrivenCharacterCameraComponent
// ClassId: 5806
// RuntimeId: 64181
// TypeInfo: 0x0000000144E39530
#include "../GameClient/ClientCharacterCameraComponent.h"

namespace GameClient {
    class ClientInputDrivenCharacterCameraComponent : public GameClient::ClientCharacterCameraComponent {
        char pad_0x70[0x60];
    }; // 0xD0
    static_assert(sizeof(ClientInputDrivenCharacterCameraComponent) == 0xD0);
}