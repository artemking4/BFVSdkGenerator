// Object: RangeConditionEvaluator
// ClassId: 8327
// RuntimeId: 12825
// TypeInfo: 0x0000000144BFC2F0
#include "../BattleAI/IActionConditionEvaluator.h"

namespace BattleAI {
    class RangeConditionEvaluator : public BattleAI::IActionConditionEvaluator {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(RangeConditionEvaluator) == 0x10);
}