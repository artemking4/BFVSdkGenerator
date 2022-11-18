// Object: FriendJoinEventType
// RuntimeId: 18530
// TypeInfo: 0x0000000144C33C70

namespace Casablanca {
    enum FriendJoinEventType {
        FriendJoinEventType_None = 0,
        FriendJoinEventType_TargetLeft = 1,
        FriendJoinEventType_TargetIsJoiningFriend = 2,
        FriendJoinEventType_TargetWithFriend = 3,
        FriendJoinEventType_TargetTeam = 4,
        FriendJoinEventType_TeamFull = 5,
        FriendJoinEventType_JoinedSquad = 6,
        FriendJoinEventType_CreatedSquad = 7,
        FriendJoinEventType_MaxSquads = 8,
        FriendJoinEventType_SquadFull = 9,
        FriendJoinEventType_NoSquad = 10,
        FriendJoinEventType_Aborted = 11,
        FriendJoinEventType_LeftGame = 12
    };
}