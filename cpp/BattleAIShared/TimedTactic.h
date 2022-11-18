// Object: TimedTactic
// ClassId: 422
// RuntimeId: 58261
// TypeInfo: 0x0000000144C13180
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

namespace BattleAIShared {
    class TimedTactic : public BattleAIShared::TacticBase {
        Float32 MinimumTimeActive; // 0x28
        Float32 MaximumTimeActive; // 0x2C
        Float32 FailedToFindCoverTimeActiveLimit; // 0x30
        Boolean UsesCoverTimer; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(TimedTactic) == 0x38);
}