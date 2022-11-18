// Object: ClientIndirectFireWeapon
// ClassId: 8659
// RuntimeId: 7973
// TypeInfo: 0x0000000144C84FA0
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientIndirectFireWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x40];
    }; // 0xEE0
    static_assert(sizeof(ClientIndirectFireWeapon) == 0xEE0);
}