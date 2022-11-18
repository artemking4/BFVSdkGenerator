// Object: ClientTurretRotationSoundComponent
// ClassId: 5904
// RuntimeId: 41718
// TypeInfo: 0x0000000144CCFBE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientTurretRotationSoundComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ClientTurretRotationSoundComponent) == 0xD0);
}