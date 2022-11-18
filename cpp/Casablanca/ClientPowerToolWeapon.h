// Object: ClientPowerToolWeapon
// ClassId: 8669
// RuntimeId: 10867
// TypeInfo: 0x0000000144C84BA0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientPowerToolWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x220];
    }; // 0x10C0
    static_assert(sizeof(ClientPowerToolWeapon) == 0x10C0);
}