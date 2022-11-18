// Object: ServerRepairToolWeapon
// ClassId: 8709
// RuntimeId: 34271
// TypeInfo: 0x0000000144CDCA70
#include "../Casablanca/ServerPowerToolWeapon.h"

namespace Casablanca {
    class ServerRepairToolWeapon : public Casablanca::ServerPowerToolWeapon {
        char pad_0x470[0x10];
    }; // 0x480
    static_assert(sizeof(ServerRepairToolWeapon) == 0x480);
}