// Object: ProbabilityCondition
// ClassId: 93
// RuntimeId: 35857
// TypeInfo: 0x0000000144BEF5E0
#include "../BattleAI/ActionCondition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class ProbabilityCondition : public BattleAI::ActionCondition {
        Float32 Probability; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(ProbabilityCondition) == 0x20);
}
#pragma pack(pop)