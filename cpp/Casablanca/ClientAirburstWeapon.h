// Object: ClientAirburstWeapon
// ClassId: 8647
// RuntimeId: 22269
// TypeInfo: 0x0000000144C5C350
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientAirburstWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0xF0];
    }; // 0xF90
    static_assert(sizeof(ClientAirburstWeapon) == 0xF90);
}