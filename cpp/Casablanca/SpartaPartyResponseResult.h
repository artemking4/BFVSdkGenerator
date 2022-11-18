// Object: SpartaPartyResponseResult
// RuntimeId: 43554
// TypeInfo: 0x0000000144C6E9C0

namespace Casablanca {
    enum SpartaPartyResponseResult {
        SpartaPartyResponseResult_Success = 0,
        SpartaPartyResponseResult_Cancelled = 1,
        SpartaPartyResponseResult_Failure = 2,
        SpartaPartyResponseResult_FailureNoParty = 3,
        SpartaPartyResponseResult_FailureNoMpPrivilege = 4,
        SpartaPartyResponseResult_FailurePartyIsFull = 5,
        SpartaPartyResponseResult_AlreadyInParty = 6,
        SpartaPartyResponseResult_PlayerBanned = 7,
        SpartaPartyResponseResult_FailureNotLeader = 8,
        SpartaPartyResponseResult_Unknown = 9,
        SpartaPartyResponseResult_WrongVersion = 10,
        SpartaPartyResponseResult_ReservedInGameAndParty = 11,
        SpartaPartyResponseResult_ReservedInPartyNotInGame = 12,
        SpartaPartyResponseResult_FailedReservingInQueue = 13,
        SpartaPartyResponseResult_InviteFailure_NotInvitable = 14,
        SpartaPartyResponseResult_Count = 15
    };
}