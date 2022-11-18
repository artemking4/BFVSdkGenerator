// Object: ClientBomberWeapon
// ClassId: 8661
// RuntimeId: 17532
// TypeInfo: 0x0000000144C5C1D0
#include "../Casablanca/ClientLockingWeapon.h"

namespace Casablanca {
    class ClientBomberWeapon : public Casablanca::ClientLockingWeapon {
        char pad_0xF10[0x20];
    }; // 0xF30
    static_assert(sizeof(ClientBomberWeapon) == 0xF30);
}