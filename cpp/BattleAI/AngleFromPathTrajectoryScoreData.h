// Object: AngleFromPathTrajectoryScoreData
// ClassId: 1448
// RuntimeId: 36800
// TypeInfo: 0x0000000144BF0340
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class AngleFromPathTrajectoryScoreData : public BattleAI::CoverScoreDataWithScoreCurve {
        Float32 PathLookAheadDistance; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(AngleFromPathTrajectoryScoreData) == 0x48);
}
#pragma pack(pop)