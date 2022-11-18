// Object: ServerResupplyVehicleAmmoWeapon
// ClassId: 8713
// RuntimeId: 56023
// TypeInfo: 0x0000000144CDC9F0
#include "../Casablanca/ServerResupplyVehicleWeaponBase.h"

namespace Casablanca {
    class ServerResupplyVehicleAmmoWeapon : public Casablanca::ServerResupplyVehicleWeaponBase {
        char pad_0x480[0x30];
    }; // 0x4B0
    static_assert(sizeof(ServerResupplyVehicleAmmoWeapon) == 0x4B0);
}