// Object: BFServerWeapon
// ClassId: 8683
// RuntimeId: 53183
// TypeInfo: 0x0000000144C64540
#include "../Weapon/ServerWeapon.h"

namespace Casablanca {
    class BFServerWeapon : public Weapon::ServerWeapon {
        char pad_0x3C0[0xB0];
    }; // 0x470
    static_assert(sizeof(BFServerWeapon) == 0x470);
}