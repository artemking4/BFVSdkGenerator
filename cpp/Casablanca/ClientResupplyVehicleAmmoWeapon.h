// Object: ClientResupplyVehicleAmmoWeapon
// ClassId: 8673
// RuntimeId: 49693
// TypeInfo: 0x0000000144C84A20
#include "../Casablanca/ClientResupplyVehicleWeaponBase.h"

namespace Casablanca {
    class ClientResupplyVehicleAmmoWeapon : public Casablanca::ClientResupplyVehicleWeaponBase {
        char pad_0xFE0[0x10];
    }; // 0xFF0
    static_assert(sizeof(ClientResupplyVehicleAmmoWeapon) == 0xFF0);
}