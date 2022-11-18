// Object: MatchOutcome
// RuntimeId: 48841
// TypeInfo: 0x0000000144D4CDF0

namespace CasablancaShared {
    enum MatchOutcome {
        MatchOutcome_MajorVictory = 3,
        MatchOutcome_Victory = 2,
        MatchOutcome_MinorVictory = 1,
        MatchOutcome_Draw = 0,
        MatchOutcome_MinorDefeat = 65535,
        MatchOutcome_Defeat = 65534,
        MatchOutcome_MajorDefeat = 65533
    };
}