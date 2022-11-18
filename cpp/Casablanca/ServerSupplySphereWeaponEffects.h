// Object: ServerSupplySphereWeaponEffects
// ClassId: 8719
// RuntimeId: 54667
// TypeInfo: 0x0000000144C20A20
#include "../Casablanca/BFServerWeapon.h"

namespace Casablanca {
    class ServerSupplySphereWeaponEffects : public Casablanca::BFServerWeapon {
        char pad_0x470[0x2F0];
    }; // 0x760
    static_assert(sizeof(ServerSupplySphereWeaponEffects) == 0x760);
}