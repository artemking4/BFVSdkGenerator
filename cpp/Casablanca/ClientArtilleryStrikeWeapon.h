// Object: ClientArtilleryStrikeWeapon
// ClassId: 8649
// RuntimeId: 52277
// TypeInfo: 0x0000000144C5C250
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientArtilleryStrikeWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x120];
    }; // 0xFC0
    static_assert(sizeof(ClientArtilleryStrikeWeapon) == 0xFC0);
}