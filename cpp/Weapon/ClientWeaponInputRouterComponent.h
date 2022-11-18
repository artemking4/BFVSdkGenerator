// Object: ClientWeaponInputRouterComponent
// ClassId: 5916
// RuntimeId: 63186
// TypeInfo: 0x0000000144F75DE0
#include "../GameClient/ClientGameComponent.h"

namespace Weapon {
    class ClientWeaponInputRouterComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x48];
    }; // 0x80
    static_assert(sizeof(ClientWeaponInputRouterComponent) == 0x80);
}