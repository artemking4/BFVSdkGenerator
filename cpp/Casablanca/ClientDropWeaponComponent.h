// Object: ClientDropWeaponComponent
// ClassId: 5817
// RuntimeId: 3950
// TypeInfo: 0x0000000144C462D0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientDropWeaponComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x78];
    }; // 0xB0
    static_assert(sizeof(ClientDropWeaponComponent) == 0xB0);
}