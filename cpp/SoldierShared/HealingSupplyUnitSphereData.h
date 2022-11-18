// Object: HealingSupplyUnitSphereData
// ClassId: 4949
// RuntimeId: 48220
// TypeInfo: 0x0000000144F43930
#include "../SoldierShared/SupplyUnitSphereData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class HealingSupplyUnitSphereData : public SoldierShared::SupplyUnitSphereData {
        Float32 DistributeHealingOverTime; // 0x38
        Boolean DoNotApplyIfAlreadyHealingOverTime; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(HealingSupplyUnitSphereData) == 0x40);
}
#pragma pack(pop)