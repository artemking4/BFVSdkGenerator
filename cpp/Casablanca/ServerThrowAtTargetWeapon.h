// Object: ServerThrowAtTargetWeapon
// ClassId: 8720
// RuntimeId: 9739
// TypeInfo: 0x0000000144C20920
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerThrowAtTargetWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0xD0];
    }; // 0x540
    static_assert(sizeof(ServerThrowAtTargetWeapon) == 0x540);
}