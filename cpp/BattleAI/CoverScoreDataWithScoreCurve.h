// Object: CoverScoreDataWithScoreCurve
// ClassId: 1447
// RuntimeId: 55116
// TypeInfo: 0x0000000144BF0640
#include "../BattleAI/CoverScoreData.h"
#include "../Core/FloatCurve.h"
#include "../Global/Float32.h"

namespace BattleAI {
    class CoverScoreDataWithScoreCurve : public BattleAI::CoverScoreData {
        Core::FloatCurve ScoreCurve; // 0x30
        Float32 ScoreCurveScale; // 0x38
        Float32 ScoreCurveMaxY; // 0x3C
    }; // 0x40
    static_assert(sizeof(CoverScoreDataWithScoreCurve) == 0x40);
}