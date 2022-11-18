// Object: PreferredCoverScoreData
// ClassId: 1467
// RuntimeId: 859
// TypeInfo: 0x0000000144BEF940
#include "../BattleAI/CustomCoverScoreData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class PreferredCoverScoreData : public BattleAI::CustomCoverScoreData {
        Uint32 PreferredCoverId; // 0x30
        Float32 Score; // 0x34
    }; // 0x38
    static_assert(sizeof(PreferredCoverScoreData) == 0x38);
}
#pragma pack(pop)