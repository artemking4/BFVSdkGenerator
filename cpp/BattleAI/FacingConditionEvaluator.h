// Object: FacingConditionEvaluator
// ClassId: 8324
// RuntimeId: 8043
// TypeInfo: 0x0000000144BFC270
#include "../BattleAI/IActionConditionEvaluator.h"

namespace BattleAI {
    class FacingConditionEvaluator : public BattleAI::IActionConditionEvaluator {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(FacingConditionEvaluator) == 0x10);
}