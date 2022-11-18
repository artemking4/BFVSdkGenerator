// Object: DistanceToCorpseData
// ClassId: 1457
// RuntimeId: 25748
// TypeInfo: 0x0000000144BEFDC0
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class DistanceToCorpseData : public BattleAI::CoverScoreDataWithScoreCurve {
        Float32 MaxTimeSinceDeath; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(DistanceToCorpseData) == 0x48);
}
#pragma pack(pop)