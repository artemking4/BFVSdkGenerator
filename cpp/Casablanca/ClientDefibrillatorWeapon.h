// Object: ClientDefibrillatorWeapon
// ClassId: 8654
// RuntimeId: 57327
// TypeInfo: 0x0000000144C5BF50
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientDefibrillatorWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x20];
    }; // 0xEC0
    static_assert(sizeof(ClientDefibrillatorWeapon) == 0xEC0);
}