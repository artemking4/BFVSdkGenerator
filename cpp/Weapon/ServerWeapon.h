// Object: ServerWeapon
// ClassId: 8682
// RuntimeId: 50334
// TypeInfo: 0x0000000144F74D70
#include "../Weapon/Weapon.h"

namespace Weapon {
    class ServerWeapon : public Weapon::Weapon {
        char pad_0x1D0[0x1F0];
    }; // 0x3C0
    static_assert(sizeof(ServerWeapon) == 0x3C0);
}