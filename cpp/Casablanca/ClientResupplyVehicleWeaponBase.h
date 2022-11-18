// Object: ClientResupplyVehicleWeaponBase
// ClassId: 8672
// RuntimeId: 63336
// TypeInfo: 0x0000000144C84920
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientResupplyVehicleWeaponBase : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x140];
    }; // 0xFE0
    static_assert(sizeof(ClientResupplyVehicleWeaponBase) == 0xFE0);
}