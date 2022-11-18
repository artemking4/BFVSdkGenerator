// Object: ClientMeleeWeapon
// ClassId: 8665
// RuntimeId: 54300
// TypeInfo: 0x0000000144C84D20
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientMeleeWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x10];
    }; // 0xEB0
    static_assert(sizeof(ClientMeleeWeapon) == 0xEB0);
}