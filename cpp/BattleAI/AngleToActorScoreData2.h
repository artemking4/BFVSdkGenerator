// Object: AngleToActorScoreData2
// ClassId: 1445
// RuntimeId: 28928
// TypeInfo: 0x0000000144BF0440
#include "../BattleAI/CoverScoreData.h"
#include "../BattleAI/CoverScorePosition.h"
#include "../BattleAI/ScoreCurveForFilter.h"

#pragma pack(push, 8)
namespace BattleAI {
    class AngleToActorScoreData2 : public BattleAI::CoverScoreData {
        BattleAI::CoverScorePosition RefPosition; // 0x30
        char pad_0x34[0x4];
        Array<BattleAI::ScoreCurveForFilter> ScoresForFilter; // 0x38
    }; // 0x40
    static_assert(sizeof(AngleToActorScoreData2) == 0x40);
}
#pragma pack(pop)