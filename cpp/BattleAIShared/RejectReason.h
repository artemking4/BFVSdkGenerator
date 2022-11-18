// Object: RejectReason
// RuntimeId: 31240
// TypeInfo: 0x0000000144C19CB0

namespace BattleAIShared {
    enum RejectReason {
        RejectReason_UnInitialized = 0,
        RejectReason_FailedSnapToCollision = 1,
        RejectReason_OutsideNavmesh = 2,
        RejectReason_FailedVerticalSnapToNavMesh = 3,
        RejectReason_FailedClearance = 4,
        RejectReason_TooCloseToOtherCover = 5,
        RejectReason_Count = 6
    };
}