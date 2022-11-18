// Object: ServerLockingWeapon
// ClassId: 8698
// RuntimeId: 39397
// TypeInfo: 0x0000000144CDCEF0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerLockingWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x110];
    }; // 0x580
    static_assert(sizeof(ServerLockingWeapon) == 0x580);
}