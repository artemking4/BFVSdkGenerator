// Object: ServerBoomstickWeapon
// ClassId: 8688
// RuntimeId: 15231
// TypeInfo: 0x0000000144C642C0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerBoomstickWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x40];
    }; // 0x4B0
    static_assert(sizeof(ServerBoomstickWeapon) == 0x4B0);
}