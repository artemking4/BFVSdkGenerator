// Object: AngleFromReferenceDirectionScoreData
// ClassId: 1449
// RuntimeId: 7175
// TypeInfo: 0x0000000144BF03C0
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../BattleAI/CoverScorePosition.h"

#pragma pack(push, 8)
namespace BattleAI {
    class AngleFromReferenceDirectionScoreData : public BattleAI::CoverScoreDataWithScoreCurve {
        BattleAI::CoverScorePosition RefDirFromPos; // 0x40
        BattleAI::CoverScorePosition RefDirToPos; // 0x44
    }; // 0x48
    static_assert(sizeof(AngleFromReferenceDirectionScoreData) == 0x48);
}
#pragma pack(pop)