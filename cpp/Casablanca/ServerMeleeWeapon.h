// Object: ServerMeleeWeapon
// ClassId: 8704
// RuntimeId: 40139
// TypeInfo: 0x0000000144CDCD70
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerMeleeWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x10];
    }; // 0x480
    static_assert(sizeof(ServerMeleeWeapon) == 0x480);
}