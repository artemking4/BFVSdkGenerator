// Object: CoverFilterScoreData
// ClassId: 1446
// RuntimeId: 36274
// TypeInfo: 0x0000000144BF0740
#include "../BattleAI/CoverScoreData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAI {
    class CoverFilterScoreData : public BattleAI::CoverScoreData {
        Float32 MatchingScore; // 0x30
        Boolean EnableOnlyOutsideDefendArea; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(CoverFilterScoreData) == 0x38);
}
#pragma pack(pop)