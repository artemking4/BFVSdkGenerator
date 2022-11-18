// Object: ServerBuffWeapon
// ClassId: 8689
// RuntimeId: 47631
// TypeInfo: 0x0000000144C64240
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerBuffWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x10];
    }; // 0x480
    static_assert(sizeof(ServerBuffWeapon) == 0x480);
}