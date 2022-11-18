// Object: ClientZeroingWeapon
// ClassId: 8681
// RuntimeId: 58298
// TypeInfo: 0x0000000144F341E0
#include "../Weapon/ClientWeapon.h"

namespace Soldier {
    class ClientZeroingWeapon : public Weapon::ClientWeapon {
        char pad_0xE10[0x50];
    }; // 0xE60
    static_assert(sizeof(ClientZeroingWeapon) == 0xE60);
}