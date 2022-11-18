// Object: ServerSupplySphereWeapon
// ClassId: 8718
// RuntimeId: 5235
// TypeInfo: 0x0000000144C20AA0
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerSupplySphereWeapon : public Casablanca::BFServerWeapon {
        char pad_0x470[0x2F0];
    }; // 0x760
    static_assert(sizeof(ServerSupplySphereWeapon) == 0x760);
}