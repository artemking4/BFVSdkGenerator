// Object: CoverScoreDataWithRefPos
// ClassId: 1450
// RuntimeId: 20715
// TypeInfo: 0x0000000144BF05C0
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../BattleAI/CoverScorePosition.h"

namespace BattleAI {
    class CoverScoreDataWithRefPos : public BattleAI::CoverScoreDataWithScoreCurve {
        BattleAI::CoverScorePosition RefPosition; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(CoverScoreDataWithRefPos) == 0x48);
}