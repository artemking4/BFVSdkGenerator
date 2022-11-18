// Object: ServerDetonatedWeapon
// ClassId: 8693
// RuntimeId: 63599
// TypeInfo: 0x0000000144CDD1F0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerDetonatedWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x40];
    }; // 0x4B0
    static_assert(sizeof(ServerDetonatedWeapon) == 0x4B0);
}