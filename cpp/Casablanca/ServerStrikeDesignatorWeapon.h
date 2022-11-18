// Object: ServerStrikeDesignatorWeapon
// ClassId: 8716
// RuntimeId: 56499
// TypeInfo: 0x0000000144C20B20
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerStrikeDesignatorWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x20];
    }; // 0x490
    static_assert(sizeof(ServerStrikeDesignatorWeapon) == 0x490);
}