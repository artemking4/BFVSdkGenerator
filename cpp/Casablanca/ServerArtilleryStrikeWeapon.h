// Object: ServerArtilleryStrikeWeapon
// ClassId: 8687
// RuntimeId: 22553
// TypeInfo: 0x0000000144C643C0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerArtilleryStrikeWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0xF0];
    }; // 0x560
    static_assert(sizeof(ServerArtilleryStrikeWeapon) == 0x560);
}