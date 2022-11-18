// Object: MedicBagHealingSphereWeaponData
// ClassId: 5211
// RuntimeId: 33429
// TypeInfo: 0x0000000144D3FF50
#include "../CasablancaShared/BFWeaponData.h"
#include "../WeaponShared/HealingSphereData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MedicBagHealingSphereWeaponData : public CasablancaShared::BFWeaponData {
        WeaponShared::HealingSphereData Healer; // 0x28
        Float32 HealthPointsRefillSpeed; // 0x30
        Float32 HealthPointsPerBag; // 0x34
    }; // 0x38
    static_assert(sizeof(MedicBagHealingSphereWeaponData) == 0x38);
}
#pragma pack(pop)