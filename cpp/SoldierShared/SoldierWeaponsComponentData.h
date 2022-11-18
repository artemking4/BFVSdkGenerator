// Object: SoldierWeaponsComponentData
// ClassId: 1851
// RuntimeId: 10372
// TypeInfo: 0x0000000144F44930
#include "../Entity/GameComponentData.h"
#include "../Global/Int32.h"
#include "../SoldierShared/SoldierAimingSimulationData.h"
#include "../SoldierShared/SoldierWeaponSwitchingData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../SoldierShared/AnimatedWeaponBinding.h"
#include "../SoldierShared/Animated1pOnlyWeaponBinding.h"
#include "../SoldierShared/Animated3pOnlyWeaponBinding.h"
#include "../SoldierShared/AnimBaseSetToAntWeaponType.h"
#include "../Entity/SkeletonAsset.h"
#include "../Global/Float32.h"
#include "../SoldierShared/PickupEntityAsset.h"
#include "../SoldierShared/WeaponControlChannels.h"
#include "../SoldierShared/WeaponClassEnum.h"
#include "../SoldierShared/FiringConstraintsInfoData.h"
#include "../WeaponShared/WeaponSlot.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierWeaponsComponentData : public Entity::GameComponentData {
        Core::LinearTransform AimDir; // 0x80
        Int32 PrimaryWeaponId; // 0xC0
        char pad_0xC4[0x4];
        SoldierShared::SoldierAimingSimulationData DefaultAimingController; // 0xC8
        SoldierShared::SoldierWeaponSwitchingData WeaponSwitching; // 0xD0
        SoldierShared::AnimatedWeaponBinding AnimatedWeaponBinding; // 0xD8
        SoldierShared::Animated1pOnlyWeaponBinding Animated1pOnlyWeaponBinding; // 0x95C
        SoldierShared::Animated3pOnlyWeaponBinding Animated3pOnlyWeaponBinding; // 0xA24
        Array<SoldierShared::AnimBaseSetToAntWeaponType> AnimBaseSetToAntWeaponTypeConversion; // 0xA60
        Entity::SkeletonAsset WeaponSkeleton; // 0xA68
        Float32 AmmoClipIncreaseMultiplier; // 0xA70
        Float32 InitialAmmoMultiplier; // 0xA74
        Int32 GrenadeIncrease; // 0xA78
        Int32 UnderslungGrenadeIncrease; // 0xA7C
        Float32 ExplosiveIncreaseMultiplier; // 0xA80
        Float32 SuppressionValue; // 0xA84
        Float32 TimeSinceSuppressionIncrease; // 0xA88
        char pad_0xA8C[0x4];
        SoldierShared::PickupEntityAsset DropWeaponPickup; // 0xA90
        Float32 PowerMultiplier; // 0xA98
        char pad_0xA9C[0x4];
        SoldierShared::WeaponControlChannels CharacterStateWeaponControl; // 0xAA0
        Int32 DisableSlot; // 0xAC0
        char pad_0xAC4[0x4];
        Array<SoldierShared::WeaponClassEnum> AmmoIgnoredWeaponClasses; // 0xAC8
        Array<SoldierShared::WeaponClassEnum> AmmoExclusiveForWeaponClasses; // 0xAD0
        SoldierShared::FiringConstraintsInfoData FiringConstraintsInfo; // 0xAD8
        Array<WeaponShared::WeaponSlot> AllowedWeaponSlotsWhenRestricted; // 0xAE0
        Boolean UseExternalAimDir; // 0xAE8
        Boolean UnlimitedAmmo; // 0xAE9
        Boolean UnlimitedMags; // 0xAEA
        Boolean CanPeekOver; // 0xAEB
        Boolean IsOwnedByAI; // 0xAEC
        Boolean SupportsWeaponPredictionAndCorrection; // 0xAED
        Boolean AbortReload; // 0xAEE
        Boolean UseTargetEntityWhenFiring; // 0xAEF
        Boolean AmmoModifierDynamicUpdatesEnabled; // 0xAF0
        Boolean dropAllWeaponsOnDeath; // 0xAF1
        Boolean canDropCurrentWeapon; // 0xAF2
        Boolean DisableQuickThrow; // 0xAF3
        Boolean OnlyAllowCertainWeaponsWhenRestricted; // 0xAF4
        Boolean AllowAllMeleeWeaponsInVehicles; // 0xAF5
        char pad_0xAF6[0xA];
    }; // 0xB00
    static_assert(sizeof(SoldierWeaponsComponentData) == 0xB00);
}
#pragma pack(pop)