// Object: ServerIndirectFireWeapon
// ClassId: 8697
// RuntimeId: 51130
// TypeInfo: 0x0000000144CDD070
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerIndirectFireWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x20];
    }; // 0x490
    static_assert(sizeof(ServerIndirectFireWeapon) == 0x490);
}