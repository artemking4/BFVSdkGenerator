// Object: BattleAIProjectile
// ClassId: 317
// RuntimeId: 25913
// TypeInfo: 0x0000000144C13080
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/BattleAIProjectileCurveType.h"
#include "../BattleAIShared/LinearTime.h"
#include "../BattleAIShared/Dispersion.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/ProjectileBlueprint.h"
#include "../Audio/SoundAsset.h"
#include "../BattleAIShared/GrenadeTimerType.h"
#include "../BattleAIShared/GrenadeTokenType.h"
#include "../GameShared/AntEnumeration.h"
#include "../BattleAIShared/ValidAgainst.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BattleAIProjectile : public Core::DataContainerPolicyAsset {
        BattleAIShared::BattleAIProjectileCurveType Curve; // 0x20
        BattleAIShared::LinearTime Minimum; // 0x24
        BattleAIShared::LinearTime Maximum; // 0x2C
        BattleAIShared::Dispersion Dispersion; // 0x34
        Float32 ToTargetDistanceRatio; // 0x4C
        Float32 HighTargetThreshold; // 0x50
        Float32 DispersionMultiplierForHighTargets; // 0x54
        WeaponShared::ProjectileBlueprint Projectile; // 0x58
        Audio::SoundAsset Sound; // 0x60
        BattleAIShared::GrenadeTimerType TimerType; // 0x68
        BattleAIShared::GrenadeTokenType TokenType; // 0x6C
        Float32 ForceMinDistanceToTarget; // 0x70
        Float32 TargetPredictionLeadTime; // 0x74
        GameShared::AntEnumeration AntProjectileValue; // 0x78
        BattleAIShared::ValidAgainst ValidAgainst; // 0x80
        Boolean EnableImprovedAimForHighTargets; // 0x84
        Boolean ValidateTrajectoryPreThrow; // 0x85
        Boolean ValidateTrajectoryThrow; // 0x86
        Boolean OnlyUsePreThrowTargetPosition; // 0x87
        Boolean RequirePassiveTarget; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(BattleAIProjectile) == 0x90);
}
#pragma pack(pop)