// Object: ServerMedicBagHealingSphereWeapon
// ClassId: 8702
// RuntimeId: 6975
// TypeInfo: 0x0000000144CDCE70
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerMedicBagHealingSphereWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x10];
    }; // 0x480
    static_assert(sizeof(ServerMedicBagHealingSphereWeapon) == 0x480);
}