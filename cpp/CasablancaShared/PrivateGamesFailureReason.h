// Object: PrivateGamesFailureReason
// RuntimeId: 64541
// TypeInfo: 0x0000000144D6E670

namespace CasablancaShared {
    enum PrivateGamesFailureReason {
        PrivateGamesFailureReason_GenericError = 0,
        PrivateGamesFailureReason_NotConfiguredForTenancy = 1,
        PrivateGamesFailureReason_OperationNotAllowed = 2,
        PrivateGamesFailureReason_ValidationError = 3,
        PrivateGamesFailureReason_PlaygroundNotFound = 4,
        PrivateGamesFailureReason_PlaygroundModified = 5,
        PrivateGamesFailureReason_MaxAllowedPlaygrounds = 6,
        PrivateGamesFailureReason_BlazeError_NoDedicatedServer = 7,
        PrivateGamesFailureReason_PersonaGameQuotaExceeded = 8,
        PrivateGamesFailureReason_GlobalGameQuotaExceeded = 9,
        PrivateGamesFailureReason_NoScheduledBlueprint = 10,
        PrivateGamesFailureReason_PartyMemberCannotCreateGame = 11,
        PrivateGamesFailureReason_Count = 12
    };
}