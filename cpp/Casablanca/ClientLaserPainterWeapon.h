// Object: ClientLaserPainterWeapon
// ClassId: 8663
// RuntimeId: 9521
// TypeInfo: 0x0000000144C84EA0
#include "../Casablanca/ClientLockingWeapon.h"

namespace Casablanca {
    class ClientLaserPainterWeapon : public Casablanca::ClientLockingWeapon {
        char pad_0xF10[0x90];
    }; // 0xFA0
    static_assert(sizeof(ClientLaserPainterWeapon) == 0xFA0);
}