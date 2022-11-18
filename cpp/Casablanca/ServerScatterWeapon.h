// Object: ServerScatterWeapon
// ClassId: 8715
// RuntimeId: 31618
// TypeInfo: 0x0000000144CDC870
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerScatterWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x20];
    }; // 0x490
    static_assert(sizeof(ServerScatterWeapon) == 0x490);
}