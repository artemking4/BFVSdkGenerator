// Object: ClientStrikeDesignatorWeapon
// ClassId: 8676
// RuntimeId: 37346
// TypeInfo: 0x0000000144C847A0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientStrikeDesignatorWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0xE0];
    }; // 0xF80
    static_assert(sizeof(ClientStrikeDesignatorWeapon) == 0xF80);
}