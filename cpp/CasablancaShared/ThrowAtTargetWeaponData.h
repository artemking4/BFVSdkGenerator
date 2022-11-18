// Object: ThrowAtTargetWeaponData
// ClassId: 5229
// RuntimeId: 48539
// TypeInfo: 0x0000000144D3F750
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/SupplyData.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ThrowAtTargetWeaponData : public CasablancaShared::BFWeaponData {
        Float32 DefaultPowerModifier; // 0x28
        Float32 ThrowToSoldierDistance; // 0x2C
        Float32 MaxPitch; // 0x30
        Float32 AimConeAngle; // 0x34
        SoldierShared::SupplyData SelfSupplyData; // 0x38
        GameShared::UnlockAssetBase SelfSupplyUnlockAsset; // 0x68
        Float32 RequestTimeout; // 0x70
        Float32 ScoreFullAmmo; // 0x74
        Float32 ScoreNoAmmo; // 0x78
        Float32 ScoreRequestedAmmo; // 0x7C
        Float32 ExcludeAmmoPercentage; // 0x80
        Float32 ScoreFullHealth; // 0x84
        Float32 ScoreNoHealth; // 0x88
        Float32 ScoreRequestedHealth; // 0x8C
        Float32 ScoreDistanceClose; // 0x90
        Float32 ScoreDistanceFar; // 0x94
        Float32 ScoreAngleClose; // 0x98
        Float32 ScoreAngleFar; // 0x9C
        Float32 TargetsUpdateTime; // 0xA0
        Boolean AmmoHealthIsHealing; // 0xA4
        Boolean TargetEnemySoldiers; // 0xA5
        Boolean AllowTargetsInVehicles; // 0xA6
        Boolean RequireTarget; // 0xA7
        Boolean EnableClientVisualTrajectory; // 0xA8
        Boolean SelfSupplyWhenUnableToThrow; // 0xA9
        char pad_0xAA[0x6];
    }; // 0xB0
    static_assert(sizeof(ThrowAtTargetWeaponData) == 0xB0);
}
#pragma pack(pop)