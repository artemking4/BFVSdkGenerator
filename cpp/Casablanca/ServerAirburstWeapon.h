// Object: ServerAirburstWeapon
// ClassId: 8685
// RuntimeId: 11918
// TypeInfo: 0x0000000144C64440
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerAirburstWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0xF0];
    }; // 0x560
    static_assert(sizeof(ServerAirburstWeapon) == 0x560);
}