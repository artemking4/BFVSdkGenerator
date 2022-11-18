// Object: ClientDakarSyringeWeapon
// ClassId: 8653
// RuntimeId: 15547
// TypeInfo: 0x0000000144C5BFD0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientDakarSyringeWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x20];
    }; // 0xEC0
    static_assert(sizeof(ClientDakarSyringeWeapon) == 0xEC0);
}