// Object: ServerDakarSyringeWeapon
// ClassId: 8691
// RuntimeId: 6655
// TypeInfo: 0x0000000144C64140
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerDakarSyringeWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x20];
    }; // 0x490
    static_assert(sizeof(ServerDakarSyringeWeapon) == 0x490);
}