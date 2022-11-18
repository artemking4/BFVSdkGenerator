// Object: BFServerWeaponStateEntity
// ClassId: 7793
// RuntimeId: 38068
// TypeInfo: 0x0000000144C3C950
#include "../Soldier/ServerWeaponStateEntity.h"

namespace Casablanca {
    class BFServerWeaponStateEntity : public Soldier::ServerWeaponStateEntity {
        char pad_0xD0[0x100];
    }; // 0x1D0
    static_assert(sizeof(BFServerWeaponStateEntity) == 0x1D0);
}