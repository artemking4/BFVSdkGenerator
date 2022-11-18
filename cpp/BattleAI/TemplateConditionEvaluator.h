// Object: TemplateConditionEvaluator
// ClassId: 8329
// RuntimeId: 49153
// TypeInfo: 0x0000000144BFC170
#include "../BattleAI/IActionConditionEvaluator.h"

namespace BattleAI {
    class TemplateConditionEvaluator : public BattleAI::IActionConditionEvaluator {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(TemplateConditionEvaluator) == 0x10);
}