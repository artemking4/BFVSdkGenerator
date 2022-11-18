// Object: WeaponFiringData
// ClassId: 4079
// RuntimeId: 22469
// TypeInfo: 0x0000000144F7A260
#include "../Core/GameDataContainer.h"
#include "../WeaponShared/FiringFunctionData.h"
#include "../WeaponShared/SecondaryFireData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/WeaponSwayData.h"
#include "../WeaponShared/RumbleFiringData.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponFiringData : public Core::GameDataContainer {
        WeaponShared::FiringFunctionData PrimaryFire; // 0x18
        WeaponShared::SecondaryFireData SecondaryFire; // 0x20
        Float32 DeployTime; // 0x2C
        Float32 ReactivateCooldownTime; // 0x30
        Float32 DisableZoomOnDeployTime; // 0x34
        Float32 DisableZoomOnAltDeployTime; // 0x38
        Float32 DisableZoomOnAutomaticSwitchbackDeployTime; // 0x3C
        Float32 AltDeployTime; // 0x40
        Float32 DeployTimeForAutomaticSwitchback; // 0x44
        Int32 AltDeployId; // 0x48
        char pad_0x4C[0x4];
        WeaponShared::WeaponSwayData WeaponSway; // 0x50
        WeaponShared::RumbleFiringData Rumble; // 0x58
        Float32 SupportDelayStand; // 0x64
        Float32 SupportDelayProne; // 0x68
        Float32 HighFrequencyUpdateDistance; // 0x6C
        Float32 LowFrequencyUpdateDistance; // 0x70
        Boolean UseAutoAiming; // 0x74
        Boolean InflictSelfDamage; // 0x75
        Boolean ShowEnemyNametagOnAim; // 0x76
        Boolean ReloadWholeMags; // 0x77
        Boolean AbortReloadOnSprint; // 0x78
        Boolean UseRemoteDamageGiverInfo; // 0x79
        Boolean IsSilenced; // 0x7A
        Boolean ResetFiringOnDeactivation; // 0x7B
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(WeaponFiringData) == 0x80);
}
#pragma pack(pop)