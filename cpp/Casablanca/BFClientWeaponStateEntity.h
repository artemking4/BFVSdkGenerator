// Object: BFClientWeaponStateEntity
// ClassId: 7057
// RuntimeId: 39836
// TypeInfo: 0x0000000144C93FB0
#include "../Soldier/ClientWeaponStateEntity.h"

namespace Casablanca {
    class BFClientWeaponStateEntity : public Soldier::ClientWeaponStateEntity {
        char pad_0x100[0x118];
    }; // 0x218
    static_assert(sizeof(BFClientWeaponStateEntity) == 0x218);
}