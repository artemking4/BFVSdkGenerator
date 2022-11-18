// Object: AffectorStackingPolicy
// RuntimeId: 3763
// TypeInfo: 0x0000000144DF3140

namespace DiceShooterShared {
    enum AffectorStackingPolicy {
        AffectorStackingPolicy_AllowMultiple = 0,
        AffectorStackingPolicy_ReplaceOld = 1,
        AffectorStackingPolicy_IgnoreNew = 2,
        AffectorStackingPolicy_CombineResetDuration = 3,
        AffectorStackingPolicy_CombineAddDuration = 4,
        AffectorStackingPolicy_ReplaceLowerRank = 5
    };
}