// Object: AIInvestigateTactic
// ClassId: 412
// RuntimeId: 50202
// TypeInfo: 0x0000000144C10880
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AIInvestigateSearchQuerySettings.h"
#include "../Global/Int32.h"
#include "../BattleAIShared/AIMoveSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIInvestigateTactic : public BattleAIShared::TacticBase {
        Float32 TimeSpentInspecting; // 0x28
        Float32 TimeSpentInspecingFarPosition; // 0x2C
        Float32 InitialReactionTime; // 0x30
        Float32 StationaryIdleStateTime; // 0x34
        Float32 GiveUpReactionTime; // 0x38
        Float32 MinDistFromInvestigatePos; // 0x3C
        Float32 MaxDistFromInvestigatePos; // 0x40
        Float32 FailToFindPositionTimeout; // 0x44
        Float32 CooldownTime; // 0x48
        Float32 FarInvestigationDistance; // 0x4C
        Float32 StopAbruptlyDuration; // 0x50
        Float32 BookingRadius; // 0x54
        BattleAIShared::AIInvestigateSearchQuerySettings SearchQuerySettings; // 0x58
        Float32 MinimumShiftRadius; // 0x60
        Float32 MaximumShiftRadius; // 0x64
        Int32 ShiftAttempts; // 0x68
        char pad_0x6C[0x4];
        BattleAIShared::AIMoveSettings UrgentInvestigateMoveSettings; // 0x70
        BattleAIShared::AIMoveSettings ReturnMoveSettings; // 0x78
        Float32 SearchAreaDuration; // 0x80
        Float32 CorpseSearchAreaDurationOverride; // 0x84
        Boolean PerformInitialInspect; // 0x88
        Boolean OnlyInvestigateInsideDefendArea; // 0x89
        Boolean OnlyInvestigateInsideDefendLimits; // 0x8A
        Boolean SnapInvestigatePosToDefendArea; // 0x8B
        Boolean DisregardCorpses; // 0x8C
        Boolean ReturnToStartPosition; // 0x8D
        char pad_0x8E[0x2];
    }; // 0x90
    static_assert(sizeof(AIInvestigateTactic) == 0x90);
}
#pragma pack(pop)