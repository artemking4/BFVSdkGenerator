// Object: ClientTargetCameraComponent
// ClassId: 5899
// RuntimeId: 49091
// TypeInfo: 0x0000000144CD37E0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientTargetCameraComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientTargetCameraComponent) == 0x48);
}