// Object: AIFleeTactic
// ClassId: 419
// RuntimeId: 42707
// TypeInfo: 0x0000000144C11E00
#include "../BattleAIShared/CoverTactic.h"
#include "../BattleAIShared/FleeCoverRequestSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIFleeTactic : public BattleAIShared::CoverTactic {
        BattleAIShared::FleeCoverRequestSettings CoverRequestSettings; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(AIFleeTactic) == 0x40);
}
#pragma pack(pop)