// Object: ServerMortarStrikeWeapon
// ClassId: 8706
// RuntimeId: 60829
// TypeInfo: 0x0000000144CDCCF0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerMortarStrikeWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x40];
    }; // 0x4B0
    static_assert(sizeof(ServerMortarStrikeWeapon) == 0x4B0);
}