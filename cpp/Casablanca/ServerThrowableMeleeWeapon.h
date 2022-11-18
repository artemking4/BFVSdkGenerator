// Object: ServerThrowableMeleeWeapon
// ClassId: 8705
// RuntimeId: 22915
// TypeInfo: 0x0000000144C209A0
#include "../Casablanca/ServerMeleeWeapon.h"

namespace Casablanca {
    class ServerThrowableMeleeWeapon : public Casablanca::ServerMeleeWeapon {
        char pad_0x480[0x20];
    }; // 0x4A0
    static_assert(sizeof(ServerThrowableMeleeWeapon) == 0x4A0);
}