// Object: ClientLockingWeapon
// ClassId: 8660
// RuntimeId: 54278
// TypeInfo: 0x0000000144C84E20
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientLockingWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x70];
    }; // 0xF10
    static_assert(sizeof(ClientLockingWeapon) == 0xF10);
}