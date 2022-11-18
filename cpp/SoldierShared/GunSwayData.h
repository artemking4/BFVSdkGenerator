// Object: GunSwayData
// ClassId: 5701
// RuntimeId: 63901
// TypeInfo: 0x0000000144F49AC0
#include "../WeaponShared/WeaponSwayData.h"
#include "../SoldierShared/GunSwayDispersionAngleSet.h"
#include "../SoldierShared/GunSwayStanceChangePenalty.h"
#include "../SoldierShared/GunSwayDispersionSet.h"
#include "../SoldierShared/GunSwayDispersionMovementSettingsSet.h"
#include "../SoldierShared/GunSwayRecoilDataSet.h"
#include "../SoldierShared/GunSwaySuppressionSettingsZoomTypes.h"
#include "../SoldierShared/GunSwayStanceChangePenalties.h"
#include "../SoldierShared/GunSwayModifierUnlock.h"
#include "../Global/Float32.h"
#include "../SoldierShared/CameraRecoilData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class GunSwayData : public WeaponShared::WeaponSwayData {
        Array<SoldierShared::GunSwayDispersionAngleSet> DispersionAnglesBaked; // 0x18
        Array<SoldierShared::GunSwayStanceChangePenalty> StanceChangePenaltiesBaked; // 0x20
        SoldierShared::GunSwayDispersionSet MinMaxDispersion; // 0x28
        SoldierShared::GunSwayDispersionMovementSettingsSet DispersionBehavior; // 0x98
        SoldierShared::GunSwayRecoilDataSet Recoil; // 0x148
        SoldierShared::GunSwaySuppressionSettingsZoomTypes SuppressionPenalties; // 0x1E0
        SoldierShared::GunSwayStanceChangePenalties StanceChangePenalties; // 0x314
        char pad_0x374[0x4];
        Array<SoldierShared::GunSwayModifierUnlock> ModifierUnlocks; // 0x378
        Float32 CameraRecoilWhenZoomedAmount; // 0x380
        char pad_0x384[0x4];
        SoldierShared::CameraRecoilData CameraRecoil; // 0x388
    }; // 0x390
    static_assert(sizeof(GunSwayData) == 0x390);
}
#pragma pack(pop)