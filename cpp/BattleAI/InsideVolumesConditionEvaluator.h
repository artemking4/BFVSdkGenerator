// Object: InsideVolumesConditionEvaluator
// ClassId: 8325
// RuntimeId: 42834
// TypeInfo: 0x0000000144BFC1F0
#include "../BattleAI/IActionConditionEvaluator.h"

namespace BattleAI {
    class InsideVolumesConditionEvaluator : public BattleAI::IActionConditionEvaluator {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(InsideVolumesConditionEvaluator) == 0x10);
}