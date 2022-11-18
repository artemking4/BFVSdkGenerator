// Object: ServerBomberWeapon
// ClassId: 8699
// RuntimeId: 4656
// TypeInfo: 0x0000000144C64340
#include "../Casablanca/ServerLockingWeapon.h"

namespace Casablanca {
    class ServerBomberWeapon : public Casablanca::ServerLockingWeapon {
        char pad_0x580[0x30];
    }; // 0x5B0
    static_assert(sizeof(ServerBomberWeapon) == 0x5B0);
}