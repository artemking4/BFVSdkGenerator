// Object: AmmoSupplyUnitSphereData
// ClassId: 4948
// RuntimeId: 52567
// TypeInfo: 0x0000000144F43830
#include "../SoldierShared/SupplyUnitSphereData.h"
#include "../SoldierShared/WeaponClassEnum.h"
#include "../SoldierShared/WeaponClassSupplyLimit.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/SupplyMethod.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AmmoSupplyUnitSphereData : public SoldierShared::SupplyUnitSphereData {
        Array<SoldierShared::WeaponClassEnum> IgnoredWeaponClasses; // 0x38
        Array<SoldierShared::WeaponClassEnum> ExclusiveForWeaponClasses; // 0x40
        Array<SoldierShared::WeaponClassSupplyLimit> SupplyLimitedClasses; // 0x48
        SoldierShared::SupplyMethod SupplyMethod; // 0x50
        Boolean SpeedUpAutoReplenish; // 0x54
        Boolean ForceSupplyIndividualBullets; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(AmmoSupplyUnitSphereData) == 0x58);
}
#pragma pack(pop)