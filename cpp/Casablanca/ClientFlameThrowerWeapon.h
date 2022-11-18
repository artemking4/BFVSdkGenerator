// Object: ClientFlameThrowerWeapon
// ClassId: 8656
// RuntimeId: 41443
// TypeInfo: 0x0000000144C850A0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientFlameThrowerWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x10];
    }; // 0xEB0
    static_assert(sizeof(ClientFlameThrowerWeapon) == 0xEB0);
}