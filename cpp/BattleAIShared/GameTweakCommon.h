// Object: GameTweakCommon
// ClassId: 363
// RuntimeId: 28603
// TypeInfo: 0x0000000144C189B0
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/VisionSensingData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/DistanceToAwareTimeData.h"
#include "../Core/FloatCurve.h"
#include "../BattleAIShared/GrenadeTokenList.h"
#include "../Global/Int32.h"
#include "../GameShared/TeamId.h"
#include "../BattleAIShared/AwarenessState.h"
#include "../BattleAIShared/CorpseReactionData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class GameTweakCommon : public Core::DataContainerPolicyAsset {
        BattleAIShared::VisionSensingData Vision; // 0x20
        Float32 MinimumAlertedFiringDelay; // 0x28
        Float32 MaximumAlertedFiringDelay; // 0x2C
        Float32 MinimumAnxiousAlertedFiringDelay; // 0x30
        Float32 MaximumAnxiousAlertedFiringDelay; // 0x34
        Float32 AlertSuppressionAmount; // 0x38
        char pad_0x3C[0x4];
        BattleAIShared::DistanceToAwareTimeData DistanceToAwareTimeCentral; // 0x40
        Float32 AwareCurveCentralAngle; // 0x48
        char pad_0x4C[0x4];
        BattleAIShared::DistanceToAwareTimeData DistanceToAwareTimePeripheral; // 0x50
        Float32 RecognizeTeammateKilledDistance; // 0x58
        Float32 AwareCrouchingMultiplier; // 0x5C
        Float32 AwareProneMultiplier; // 0x60
        Float32 AwareToAlertTime; // 0x64
        Float32 SuspicionPauseBeforeDecrementing; // 0x68
        Float32 HearingSuspicionPauseBeforeDecrementing; // 0x6C
        Float32 TimeToFullyDepleteSuspicion; // 0x70
        Float32 TimetoFullyDepleteVisionAwareness; // 0x74
        Float32 VisionAwarenessRequiredForInvstigationUpdates; // 0x78
        Float32 CorpseDetectionDistance; // 0x7C
        Float32 VisibilityAcummulationTime; // 0x80
        char pad_0x84[0x4];
        Core::FloatCurve VisibilityAcummulationTimeCurve; // 0x88
        Float32 HighIntensityRadius; // 0x90
        Float32 MediumIntensityRadius; // 0x94
        Float32 SquadHighIntensityRadius; // 0x98
        Float32 SquadMediumIntensityRadius; // 0x9C
        Float32 StationaryInvestigateSeenEnemyAlertPercent; // 0xA0
        Float32 InvestigateSeenEnemyAlertPercent; // 0xA4
        Float32 UrgentInvestigateSuspicionThreshold; // 0xA8
        Float32 ConcealmentCoolDownTime; // 0xAC
        Float32 ConcealmentDisableAtDistance; // 0xB0
        Float32 PassiveTime; // 0xB4
        Array<BattleAIShared::GrenadeTokenList> GrenadeTokens; // 0xB8
        Float32 MeleeChargeTokenMinimumTime; // 0xC0
        Float32 MeleeChargeTokenMaximumTime; // 0xC4
        Int32 MeleeChargeTokenCount; // 0xC8
        Float32 MeleeChargeMinimumCooldownTimer; // 0xCC
        Float32 FiringTokenMinimumTime; // 0xD0
        Float32 FiringTokenMaximumTime; // 0xD4
        Int32 FiringTokenCount; // 0xD8
        Int32 FiringTokenPerTargetCount; // 0xDC
        Int32 SimultaneousChargeCount; // 0xE0
        Int32 SimultaneousVehicleUsage; // 0xE4
        Float32 MinVehicleBookingDelayOnTokenAvailable; // 0xE8
        Float32 MaxVehicleBookingDelayOnTokenAvailable; // 0xEC
        Float32 MaxTimeSinceEnemyLostToStartCombatInvestigate; // 0xF0
        Float32 MaxTimeSinceEnemyLostToSearch; // 0xF4
        Float32 MinTimeToStayAlertWhenAlertedBySomethingOtherThanSighting; // 0xF8
        Float32 FallbackToSearchAreaWhenNeverSeenEnemyTime; // 0xFC
        Float32 MinTimeFromRecentThreatToSearchArea; // 0x100
        char pad_0x104[0x4];
        Array<GameShared::TeamId> TeamsWithAwareness; // 0x108
        Float32 MaxLastKnownPositionShareDistance; // 0x110
        BattleAIShared::AwarenessState CorpseReactionState; // 0x114
        Array<BattleAIShared::CorpseReactionData> CorpseReactions; // 0x118
        Float32 BeingChargedAwarenessMultiplier; // 0x120
        Float32 BeingChargedDetectDistance; // 0x124
        Float32 BeingChargedAngleLimit; // 0x128
        Float32 GadgetUsageSelfCooldownMultiplier; // 0x12C
        Float32 GadgetUsageTeamCooldownMultiplier; // 0x130
        Float32 AimBoxMultiplier; // 0x134
        Boolean KeepSuspicionWhileInvestigating; // 0x138
        Boolean ClampSuspicionToStateThreshold; // 0x139
        Boolean LureOnGrenadeCollision; // 0x13A
        Boolean EnableVisibilityAcummulation; // 0x13B
        Boolean IgnoreSoundWhenAlerted; // 0x13C
        Boolean CombatInvestigateCanExceedMaxSearchTime; // 0x13D
        Boolean AreaSearchWithoutCombatInvestigate; // 0x13E
        Boolean InvestigateLatestSound; // 0x13F
        Boolean IncludeTerrainInVisionTests; // 0x140
        Boolean UseCoverApproxFirePositionForVision; // 0x141
        Boolean EnableLastKnownPositionSharing; // 0x142
        Boolean AlertedByFriendlyCombatActions; // 0x143
        Boolean UseInvestigationPriorities; // 0x144
        Boolean BeingShotAtTriggerSearchArea; // 0x145
        char pad_0x146[0x2];
    }; // 0x148
    static_assert(sizeof(GameTweakCommon) == 0x148);
}
#pragma pack(pop)