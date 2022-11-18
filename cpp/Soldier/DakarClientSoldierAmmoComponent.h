// Object: DakarClientSoldierAmmoComponent
// ClassId: 5919
// RuntimeId: 533
// TypeInfo: 0x0000000144F33F60
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class DakarClientSoldierAmmoComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x60];
    }; // 0x98
    static_assert(sizeof(DakarClientSoldierAmmoComponent) == 0x98);
}