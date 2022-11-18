// Object: CoverTactic
// ClassId: 415
// RuntimeId: 11308
// TypeInfo: 0x0000000144C13480
#include "../BattleAIShared/TacticBase.h"
#include "../BattleAIShared/CoverQueryData.h"
#include "../BattleAIShared/AICoverControlSettings.h"

namespace BattleAIShared {
    class CoverTactic : public BattleAIShared::TacticBase {
        BattleAIShared::CoverQueryData CoverQuery; // 0x28
        BattleAIShared::AICoverControlSettings CoverSettings; // 0x30
    }; // 0x38
    static_assert(sizeof(CoverTactic) == 0x38);
}