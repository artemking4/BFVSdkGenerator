// Object: ServerResupplyVehicleWeaponBase
// ClassId: 8712
// RuntimeId: 61239
// TypeInfo: 0x0000000144CDC8F0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerResupplyVehicleWeaponBase : public Casablanca::BFServerWeapon {
        char pad_0x470[0x10];
    }; // 0x480
    static_assert(sizeof(ServerResupplyVehicleWeaponBase) == 0x480);
}