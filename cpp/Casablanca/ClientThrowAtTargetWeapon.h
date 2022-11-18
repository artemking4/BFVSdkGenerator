// Object: ClientThrowAtTargetWeapon
// ClassId: 8679
// RuntimeId: 33291
// TypeInfo: 0x0000000144C1E540
#include "../Casablanca/BFClientWeapon.h"

namespace Casablanca {
    class ClientThrowAtTargetWeapon : public Casablanca::BFClientWeapon {
        char pad_0xEA0[0x100];
    }; // 0xFA0
    static_assert(sizeof(ClientThrowAtTargetWeapon) == 0xFA0);
}