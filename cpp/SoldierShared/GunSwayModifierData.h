// Object: GunSwayModifierData
// ClassId: 526
// RuntimeId: 11179
// TypeInfo: 0x0000000144F49B40
#include "../Core/Asset.h"
#include "../SoldierShared/GunSwayDispersionModData.h"
#include "../SoldierShared/GunSwayRecoilModData.h"
#include "../SoldierShared/GunSwayStanceZoomModifierData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class GunSwayModifierData : public Core::Asset {
        Array<SoldierShared::GunSwayDispersionModData> DispersionModifiers; // 0x20
        Array<SoldierShared::GunSwayRecoilModData> RecoilModifiers; // 0x28
        SoldierShared::GunSwayStanceZoomModifierData StandZoomModifier; // 0x30
        SoldierShared::GunSwayStanceZoomModifierData StandNoZoomModifier; // 0x94
        SoldierShared::GunSwayStanceZoomModifierData CrouchZoomModifier; // 0xF8
        SoldierShared::GunSwayStanceZoomModifierData CrouchNoZoomModifier; // 0x15C
        SoldierShared::GunSwayStanceZoomModifierData ProneZoomModifier; // 0x1C0
        SoldierShared::GunSwayStanceZoomModifierData ProneNoZoomModifier; // 0x224
        Float32 ApplyRecoilOverTime; // 0x288
        Boolean OnlyInSupportedShooting; // 0x28C
        Boolean OnlyOnWeaponLightEnabled; // 0x28D
        Boolean DynamicUpdateEnabled; // 0x28E
        char pad_0x28F[0x1];
    }; // 0x290
    static_assert(sizeof(GunSwayModifierData) == 0x290);
}
#pragma pack(pop)