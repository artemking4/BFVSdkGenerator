// Object: ProbabilityConditionEvaluator
// ClassId: 8326
// RuntimeId: 17666
// TypeInfo: 0x0000000144BFBF60
#include "../BattleAI/IActionConditionEvaluator.h"

namespace BattleAI {
    class ProbabilityConditionEvaluator : public BattleAI::IActionConditionEvaluator {
        char pad_0x8[0x20];
    }; // 0x28
    static_assert(sizeof(ProbabilityConditionEvaluator) == 0x28);
}