// Object: ClientSoldierWeaponsComponent
// ClassId: 5891
// RuntimeId: 32802
// TypeInfo: 0x0000000144F34060
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierWeaponsComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x1A68];
    }; // 0x1AA0
    static_assert(sizeof(ClientSoldierWeaponsComponent) == 0x1AA0);
}