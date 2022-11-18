// Object: ServerZeroingWeapon
// ClassId: 8722
// RuntimeId: 17353
// TypeInfo: 0x0000000144F30530
#include "../Weapon/ServerWeapon.h"

namespace Soldier {
    class ServerZeroingWeapon : public Weapon::ServerWeapon {
        char pad_0x3C0[0x10];
    }; // 0x3D0
    static_assert(sizeof(ServerZeroingWeapon) == 0x3D0);
}