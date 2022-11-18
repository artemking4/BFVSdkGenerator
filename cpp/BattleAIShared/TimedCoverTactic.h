// Object: TimedCoverTactic
// ClassId: 423
// RuntimeId: 53812
// TypeInfo: 0x0000000144C11000
#include "../BattleAIShared/TimedTactic.h"
#include "../BattleAIShared/CoverQueryData.h"
#include "../BattleAIShared/AICoverControlSettings.h"

namespace BattleAIShared {
    class TimedCoverTactic : public BattleAIShared::TimedTactic {
        BattleAIShared::CoverQueryData CoverQuery; // 0x38
        BattleAIShared::AICoverControlSettings CoverSettings; // 0x40
    }; // 0x48
    static_assert(sizeof(TimedCoverTactic) == 0x48);
}