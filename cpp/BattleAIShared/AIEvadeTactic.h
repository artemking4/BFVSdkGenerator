// Object: AIEvadeTactic
// ClassId: 410
// RuntimeId: 5432
// TypeInfo: 0x0000000144C13100
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIEvadeTactic : public BattleAIShared::TacticBase {
        Float32 MinEvadeDistance; // 0x28
        Int32 MaxExpansionCount; // 0x2C
        Float32 PostEvadePauseDuration; // 0x30
        Boolean StayWithinDefendArea; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(AIEvadeTactic) == 0x38);
}
#pragma pack(pop)