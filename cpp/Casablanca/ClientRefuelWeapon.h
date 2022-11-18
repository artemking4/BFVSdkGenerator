// Object: ClientRefuelWeapon
// ClassId: 8670
// RuntimeId: 44150
// TypeInfo: 0x0000000144C84B20
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientRefuelWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x140];
    }; // 0xFE0
    static_assert(sizeof(ClientRefuelWeapon) == 0xFE0);
}