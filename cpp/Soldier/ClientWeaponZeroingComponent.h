// Object: ClientWeaponZeroingComponent
// ClassId: 5917
// RuntimeId: 59318
// TypeInfo: 0x0000000144F33FE0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientWeaponZeroingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ClientWeaponZeroingComponent) == 0x68);
}