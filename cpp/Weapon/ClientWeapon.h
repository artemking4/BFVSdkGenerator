// Object: ClientWeapon
// ClassId: 8644
// RuntimeId: 1009
// TypeInfo: 0x0000000144F75420
#include "../Weapon/Weapon.h"

namespace Weapon {
    class ClientWeapon : public Weapon::Weapon {
        char pad_0x1D0[0xC40];
    }; // 0xE10
    static_assert(sizeof(ClientWeapon) == 0xE10);
}