// Object: AIGadgetTactic
// ClassId: 421
// RuntimeId: 5260
// TypeInfo: 0x0000000144C12180
#include "../BattleAIShared/CoverTactic.h"
#include "../BattleAIShared/PoseSettings.h"
#include "../BattleAIShared/GadgetBase.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIGadgetTactic : public BattleAIShared::CoverTactic {
        BattleAIShared::PoseSettings PoseSettings; // 0x38
        Array<BattleAIShared::GadgetBase> Gadgets; // 0x40
    }; // 0x48
    static_assert(sizeof(AIGadgetTactic) == 0x48);
}
#pragma pack(pop)