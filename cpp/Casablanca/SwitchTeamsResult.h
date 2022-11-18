// Object: SwitchTeamsResult
// RuntimeId: 4979
// TypeInfo: 0x0000000144C33DB0

namespace Casablanca {
    enum SwitchTeamsResult {
        SwitchTeamsResult_Success = 65535,
        SwitchTeamsResult_FailedUnbalanced = 0,
        SwitchTeamsResult_FailedTooSoon = 1,
        SwitchTeamsResult_FailedTooFewTickets = 2,
        SwitchTeamsResult_FailedMustBeDead = 3,
        SwitchTeamsResult_FailedTeamFull = 4,
        SwitchTeamsResult_FailedDisabled = 5
    };
}