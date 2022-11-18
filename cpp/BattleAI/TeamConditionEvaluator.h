// Object: TeamConditionEvaluator
// ClassId: 8328
// RuntimeId: 65292
// TypeInfo: 0x0000000144BFC0F0
#include "../BattleAI/IActionConditionEvaluator.h"

namespace BattleAI {
    class TeamConditionEvaluator : public BattleAI::IActionConditionEvaluator {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(TeamConditionEvaluator) == 0x10);
}