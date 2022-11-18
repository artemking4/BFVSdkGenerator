// Object: AIWeaponData
// ClassId: 510
// RuntimeId: 27759
// TypeInfo: 0x0000000144C06D60
#include "../GameShared/GameAIWeaponData.h"
#include "../BattleAIShared/FiringWeaponClass.h"
#include "../BattleAIShared/VoPrimaryFireType.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/EvasionVolume.h"
#include "../BattleAIShared/PreferredRange.h"
#include "../BattleAIShared/FiringIntervalPattern.h"
#include "../BattleAIShared/SustainFiringData.h"
#include "../BattleAIShared/BurstIntervalPattern.h"
#include "../BattleAIShared/CreepingAirBarrage.h"
#include "../BattleAIShared/SprayPattern.h"
#include "../BattleAIShared/AccuracyHitBox.h"
#include "../BattleAIShared/VehicleAimerSettings.h"
#include "../BattleAIShared/VisionSensingData.h"
#include "../BattleAIShared/TargetModifier.h"
#include "../BattleAIShared/TargetingData.h"
#include "../BattleAIShared/VehicleInaccuracySettings.h"
#include "../BattleAIShared/SuppressedBehavior.h"
#include "../BattleAIShared/DamageModifier.h"
#include "../BattleAIShared/DamageModifierExtended.h"
#include "../BattleAIShared/WeaponRestrictions.h"
#include "../BattleAIShared/SpecialBehavior.h"
#include "../BattleAIShared/WeaponHitProbability.h"
#include "../BattleAIShared/DistanceToAwareTimeData.h"
#include "../BattleAIShared/ValidAgainst.h"
#include "../BattleAIShared/TargetPreference.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIWeaponData : public GameShared::GameAIWeaponData {
        BattleAIShared::FiringWeaponClass FiringWeaponClass; // 0x20
        BattleAIShared::VoPrimaryFireType VoPrimaryFireType; // 0x24
        Float32 WeaponRange; // 0x28
        Float32 MinimumUsageDistance; // 0x2C
        Float32 MaximumUsageDistance; // 0x30
        Float32 VehicleMaxTargetLOSLost; // 0x34
        Float32 MinEnterVehicleDistance; // 0x38
        Float32 ExitVehicleDisableTime; // 0x3C
        BattleAIShared::EvasionVolume EvasionVolume; // 0x40
        BattleAIShared::PreferredRange PreferredRange; // 0x48
        BattleAIShared::PreferredRange PreferredRangeVehicleTarget; // 0x50
        BattleAIShared::PreferredRange IndoorPreferredRange; // 0x58
        BattleAIShared::PreferredRange OutdoorPreferredRange; // 0x60
        BattleAIShared::FiringIntervalPattern FiringIntervalPattern; // 0x68
        BattleAIShared::SustainFiringData SustainFiringData; // 0x70
        BattleAIShared::BurstIntervalPattern BurstIntervalPattern; // 0x78
        BattleAIShared::CreepingAirBarrage CreepingAirBarrage; // 0x80
        BattleAIShared::SprayPattern SprayPattern; // 0x88
        BattleAIShared::AccuracyHitBox AccuracyHitBox; // 0x90
        BattleAIShared::VehicleAimerSettings VehicleAimerSettings; // 0x98
        BattleAIShared::VisionSensingData VisionOverride; // 0xA0
        BattleAIShared::TargetModifier TargetModifier; // 0xA8
        BattleAIShared::TargetingData TargetingSettingsOverride; // 0xB0
        BattleAIShared::VehicleInaccuracySettings VehicleInaccuracySettings; // 0xB8
        BattleAIShared::SuppressedBehavior SuppressedBehavior; // 0xC0
        BattleAIShared::DamageModifier DamageModifier; // 0xC8
        BattleAIShared::DamageModifierExtended DamageModifierExtended; // 0xD0
        BattleAIShared::WeaponRestrictions FriendlyWeaponRestrictions; // 0xD8
        BattleAIShared::WeaponRestrictions EnemyWeaponRestrictions; // 0xE0
        BattleAIShared::SpecialBehavior SpecialBehavior; // 0xE8
        BattleAIShared::WeaponHitProbability HumanTargetHitProbability; // 0xF0
        BattleAIShared::DistanceToAwareTimeData DistanceToAwareTimeOverrideCentral; // 0xF8
        BattleAIShared::DistanceToAwareTimeData DistanceToAwareTimeOverridePeripheral; // 0x100
        BattleAIShared::ValidAgainst ValidAgainst; // 0x108
        BattleAIShared::TargetPreference TargetPreference; // 0x10C
        Float32 MinPrecisionToFire; // 0x110
        Float32 WeaponThreatScale; // 0x114
        Float32 ValidWeaponScale; // 0x118
        Float32 InValidWeaponScale; // 0x11C
        Float32 HighIntensityRadiusOverride; // 0x120
        Float32 MediumIntensityRadiusOverride; // 0x124
        Float32 SquadHighIntensityRadiusOverride; // 0x128
        Float32 SquadMediumIntensityRadiusOverride; // 0x12C
        Float32 KeepFiringAtTargetTimeOverride; // 0x130
        Float32 LOFMinDistanceFromSelf; // 0x134
        Float32 LOFMaxDistanceFromTarget; // 0x138
        Float32 LOFMinFractionTowardTarget; // 0x13C
        Boolean UseTargetExtrapolation; // 0x140
        Boolean CausesEvasionOnFire; // 0x141
        Boolean TargetShouldFaceWeaponAfterEvading; // 0x142
        Boolean UseShootspaceForVision; // 0x143
        Boolean KeepFiringAtTargetWhenMoving; // 0x144
        char pad_0x145[0x3];
    }; // 0x148
    static_assert(sizeof(AIWeaponData) == 0x148);
}
#pragma pack(pop)