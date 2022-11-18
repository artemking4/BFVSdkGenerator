// Object: MultiTargetScorer
// ClassId: 1459
// RuntimeId: 17035
// TypeInfo: 0x0000000144BF00C0
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../BattleAI/MultiTargetScoringMode.h"

namespace BattleAI {
    class MultiTargetScorer : public BattleAI::CoverScoreDataWithScoreCurve {
        Float32 MaxDistanceToTarget; // 0x40
        BattleAI::MultiTargetScoringMode ScoringMode; // 0x44
        Boolean ExcludePrimaryTarget; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(MultiTargetScorer) == 0x50);
}