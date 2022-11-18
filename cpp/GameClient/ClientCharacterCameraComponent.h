// Object: ClientCharacterCameraComponent
// ClassId: 5805
// RuntimeId: 52404
// TypeInfo: 0x0000000144E36700
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientCharacterCameraComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ClientCharacterCameraComponent) == 0x70);
}