// Object: BFClientWeapon
// ClassId: 8645
// RuntimeId: 54250
// TypeInfo: 0x0000000144C5C450
#include "../Weapon/ClientWeapon.h"

namespace Casablanca {
    class BFClientWeapon : public Weapon::ClientWeapon {
        char pad_0xE10[0x90];
    }; // 0xEA0
    static_assert(sizeof(BFClientWeapon) == 0xEA0);
}