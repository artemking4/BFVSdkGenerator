// Object: WeaponComponentData
// ClassId: 1730
// RuntimeId: 32029
// TypeInfo: 0x0000000144F7A060
#include "../Entity/BoneComponentData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/WeaponFiringData.h"
#include "../WeaponShared/WeaponUnlockAsset.h"
#include "../Global/CString.h"
#include "../GameShared/GameAIWeaponData.h"
#include "../WeaponShared/WeaponData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../GameShared/WeaponClassification.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class WeaponComponentData : public Entity::BoneComponentData {
        Core::Vec3 ProjectileSpawnOffset; // 0x80
        Core::Vec3 TargetPositionOverride; // 0x90
        Core::LinearTransform Shootspace; // 0xA0
        Core::LinearTransform BulletSpawnTransform; // 0xE0
        WeaponShared::WeaponFiringData WeaponFiring; // 0x120
        WeaponShared::WeaponUnlockAsset WeaponUnlock; // 0x128
        CString DamageGiverName; // 0x130
        GameShared::GameAIWeaponData AIData; // 0x138
        WeaponShared::WeaponData CustomWeaponType; // 0x140
        Float32 ImpulseStrength; // 0x148
        Float32 RecoilForceScale; // 0x14C
        Core::FloatCurve RecoilForceCurve; // 0x150
        GameShared::WeaponClassification Classification; // 0x158
        Int32 ZoomLevel; // 0x15C
        Float32 ReloadTimeMultiplier; // 0x160
        Float32 DamageMultiplier; // 0x164
        Float32 ExplosionDamageMultiplier; // 0x168
        Float32 OverheatDropPerSecondMultiplier; // 0x16C
        Float32 OverHeatDropDelayMultiplier; // 0x170
        Float32 HeatPerBulletMultiplier; // 0x174
        Int32 InitialAmmoOverride; // 0x178
        Int32 MagazineCapacityOverride; // 0x17C
        Int32 NumberOfMagazinesOverride; // 0x180
        Float32 RateOfFireOverride; // 0x184
        Float32 RateOfFireForBurstOverride; // 0x188
        Float32 LockTimeMultiplier; // 0x18C
        Float32 LockingAcceptanceAngleMultiplier; // 0x190
        Uint32 WeaponItemHash; // 0x194
        Int32 ResupplyAmmoAmount; // 0x198
        Int32 ResupplyAmmoInMagsAmount; // 0x19C
        Boolean SequentialFiring; // 0x1A0
        Boolean OverrideShootspace; // 0x1A1
        Boolean AllowWeaponToFireUnderWater; // 0x1A2
        Boolean OverrideBulletSpawnTransform; // 0x1A3
        Boolean UseFirstPersonSounds; // 0x1A4
        Boolean SoundsEnabledTunguskaHack; // 0x1A5
        Boolean AllowOverstockForResupply; // 0x1A6
        Boolean HasFiringEffects; // 0x1A7
        char pad_0x1A8[0x8];
    }; // 0x1B0
    static_assert(sizeof(WeaponComponentData) == 0x1B0);
}
#pragma pack(pop)