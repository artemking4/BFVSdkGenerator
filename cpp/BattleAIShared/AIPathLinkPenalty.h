// Object: AIPathLinkPenalty
// RuntimeId: 5418
// TypeInfo: 0x0000000144C17B00

namespace BattleAIShared {
    enum AIPathLinkPenalty {
        PathLinkPenalty_None = 0,
        PathLinkPenalty_StronglyPrefer = 1,
        PathLinkPenalty_Prefer = 2,
        PathLinkPenalty_Light = 3,
        PathLinkPenalty_Moderate = 4,
        PathLinkPenalty_Heavy = 5,
        PathLinkPenalty_Max = 6,
        PathLinkPenalty_NumTypes = 7
    };
}