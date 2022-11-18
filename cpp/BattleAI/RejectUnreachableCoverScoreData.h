// Object: RejectUnreachableCoverScoreData
// ClassId: 1471
// RuntimeId: 32261
// TypeInfo: 0x0000000144BEFD40
#include "../BattleAI/CoverScoreData.h"
#include "../BattleAI/CoverScorePosition.h"

#pragma pack(push, 8)
namespace BattleAI {
    class RejectUnreachableCoverScoreData : public BattleAI::CoverScoreData {
        BattleAI::CoverScorePosition RefPosition; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(RejectUnreachableCoverScoreData) == 0x38);
}
#pragma pack(pop)