// Object: AIExecuteActionTactic
// ClassId: 411
// RuntimeId: 3875
// TypeInfo: 0x0000000144C12300
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIExecuteActionTactic : public BattleAIShared::TacticBase {
        Boolean OnlyExecuteActionsInDefendLimits; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(AIExecuteActionTactic) == 0x30);
}
#pragma pack(pop)