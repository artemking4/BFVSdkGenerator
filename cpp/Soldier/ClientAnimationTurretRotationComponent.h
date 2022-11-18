// Object: ClientAnimationTurretRotationComponent
// ClassId: 5783
// RuntimeId: 44788
// TypeInfo: 0x0000000144F33E60
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientAnimationTurretRotationComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x70];
    }; // 0xA8
    static_assert(sizeof(ClientAnimationTurretRotationComponent) == 0xA8);
}