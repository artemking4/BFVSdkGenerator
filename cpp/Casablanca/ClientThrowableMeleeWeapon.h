// Object: ClientThrowableMeleeWeapon
// ClassId: 8666
// RuntimeId: 53768
// TypeInfo: 0x0000000144C1E5C0
#include "../Casablanca/ClientMeleeWeapon.h"

namespace Casablanca {
    class ClientThrowableMeleeWeapon : public Casablanca::ClientMeleeWeapon {
        char pad_0xEB0[0x20];
    }; // 0xED0
    static_assert(sizeof(ClientThrowableMeleeWeapon) == 0xED0);
}