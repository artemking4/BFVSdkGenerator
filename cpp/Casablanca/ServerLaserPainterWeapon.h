// Object: ServerLaserPainterWeapon
// ClassId: 8701
// RuntimeId: 2672
// TypeInfo: 0x0000000144CDCF70
#include "../Casablanca/ServerLockingWeapon.h"

namespace Casablanca {
    class ServerLaserPainterWeapon : public Casablanca::ServerLockingWeapon {
        char pad_0x580[0x90];
    }; // 0x610
    static_assert(sizeof(ServerLaserPainterWeapon) == 0x610);
}