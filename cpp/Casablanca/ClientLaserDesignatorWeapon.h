// Object: ClientLaserDesignatorWeapon
// ClassId: 8662
// RuntimeId: 11050
// TypeInfo: 0x0000000144C84F20
#include "../Casablanca/ClientLockingWeapon.h"

namespace Casablanca {
    class ClientLaserDesignatorWeapon : public Casablanca::ClientLockingWeapon {
        char pad_0xF10[0x90];
    }; // 0xFA0
    static_assert(sizeof(ClientLaserDesignatorWeapon) == 0xFA0);
}