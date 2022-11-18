// Object: ServerLaserDesignatorWeapon
// ClassId: 8700
// RuntimeId: 34945
// TypeInfo: 0x0000000144CDCFF0
#include "../Casablanca/ServerLockingWeapon.h"

namespace Casablanca {
    class ServerLaserDesignatorWeapon : public Casablanca::ServerLockingWeapon {
        char pad_0x580[0x90];
    }; // 0x610
    static_assert(sizeof(ServerLaserDesignatorWeapon) == 0x610);
}