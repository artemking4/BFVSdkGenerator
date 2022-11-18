// Object: InvestigateState
// RuntimeId: 60243
// TypeInfo: 0x0000000144C19DF0

namespace BattleAIShared {
    enum InvestigateState {
        InvestigateState_Inactive = 0,
        InvestigateState_InitialReaction = 1,
        InvestigateState_InitialApproach = 2,
        InvestigateState_InspectPos = 3,
        InvestigateState_MoveToSearchTarget = 4,
        InvestigateState_GiveUpReaction = 5,
        InvestigateState_ReturnToStartPos = 6,
        InvestigateState_StopAbruptly = 7,
        InvestigateState_StationaryIdle = 8,
        InvestigateState_StationaryFinished = 9,
        InvestigateState_Count = 10
    };
}