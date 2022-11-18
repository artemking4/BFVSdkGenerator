// Object: ClientScatterWeapon
// ClassId: 8675
// RuntimeId: 19192
// TypeInfo: 0x0000000144C848A0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientScatterWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x20];
    }; // 0xEC0
    static_assert(sizeof(ClientScatterWeapon) == 0xEC0);
}