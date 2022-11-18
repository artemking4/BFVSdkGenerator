// Object: AIAutoPatrolTactic
// ClassId: 407
// RuntimeId: 6171
// TypeInfo: 0x0000000144C12580
#include "../BattleAIShared/TacticBase.h"
#include "../BattleAIShared/FloatInterval.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIAutoPatrolTactic : public BattleAIShared::TacticBase {
        BattleAIShared::FloatInterval WaitTimeInterval; // 0x28
        BattleAIShared::FloatInterval PerimeterPathLengthInterval; // 0x30
    }; // 0x38
    static_assert(sizeof(AIAutoPatrolTactic) == 0x38);
}
#pragma pack(pop)