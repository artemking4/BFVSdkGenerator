// Object: ClientMortarStrikeWeapon
// ClassId: 8667
// RuntimeId: 15387
// TypeInfo: 0x0000000144C84CA0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientMortarStrikeWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x120];
    }; // 0xFC0
    static_assert(sizeof(ClientMortarStrikeWeapon) == 0xFC0);
}