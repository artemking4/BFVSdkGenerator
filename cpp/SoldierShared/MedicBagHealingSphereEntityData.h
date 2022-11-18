// Object: MedicBagHealingSphereEntityData
// ClassId: 3320
// RuntimeId: 47828
// TypeInfo: 0x0000000144F43CB0
#include "../SoldierShared/ExplosionPackEntityData.h"
#include "../WeaponShared/HealingSphereData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class MedicBagHealingSphereEntityData : public SoldierShared::ExplosionPackEntityData {
        WeaponShared::HealingSphereData Healer; // 0x200
        char pad_0x208[0x8];
    }; // 0x210
    static_assert(sizeof(MedicBagHealingSphereEntityData) == 0x210);
}
#pragma pack(pop)