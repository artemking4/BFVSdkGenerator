// Object: CoverQueryDirection
// RuntimeId: 38758
// TypeInfo: 0x0000000144C04BF0

namespace BattleAIShared {
    enum CoverQueryDirection {
        CoverQueryDirection_CoverDirection = 0,
        CoverQueryDirection_WorldUpDirection = 1,
        CoverQueryDirection_ActorToHumanDirection = 2,
        CoverQueryDirection_HumanToActorDirection = 3,
        CoverQueryDirection_SquadToHumanDirection = 4,
        CoverQueryDirection_HumanToSquadDirection = 5,
        CoverQueryDirection_ActorToTargetDirection = 6,
        CoverQueryDirection_TargetToActorDirection = 7,
        CoverQueryDirection_ActorFacingDirection = 8,
        CoverQueryDirection_TargetFacingDirection = 9,
        CoverQueryDirection_ActorMoveDirection = 10,
        CoverQueryDirection_TargetMoveDirection = 11
    };
}