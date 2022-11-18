// Object: ClientDetonatedWeapon
// ClassId: 8655
// RuntimeId: 36776
// TypeInfo: 0x0000000144C5BED0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientDetonatedWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x10];
    }; // 0xEB0
    static_assert(sizeof(ClientDetonatedWeapon) == 0xEB0);
}