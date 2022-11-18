// Object: ServerArmorPlate
// ClassId: 8686
// RuntimeId: 10230
// TypeInfo: 0x0000000144CDDFE0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerArmorPlate : public Casablanca::BFServerWeapon {
        char pad_0x470[0x10];
    }; // 0x480
    static_assert(sizeof(ServerArmorPlate) == 0x480);
}