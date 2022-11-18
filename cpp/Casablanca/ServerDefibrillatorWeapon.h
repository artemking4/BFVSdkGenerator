// Object: ServerDefibrillatorWeapon
// ClassId: 8692
// RuntimeId: 38613
// TypeInfo: 0x0000000144C640C0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerDefibrillatorWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x20];
    }; // 0x490
    static_assert(sizeof(ServerDefibrillatorWeapon) == 0x490);
}