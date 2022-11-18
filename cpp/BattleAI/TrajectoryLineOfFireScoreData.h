// Object: TrajectoryLineOfFireScoreData
// ClassId: 1463
// RuntimeId: 19159
// TypeInfo: 0x0000000144BEFAC0
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class TrajectoryLineOfFireScoreData : public BattleAI::CoverScoreDataWithScoreCurve {
        Float32 Angle; // 0x40
        Float32 Distance; // 0x44
    }; // 0x48
    static_assert(sizeof(TrajectoryLineOfFireScoreData) == 0x48);
}
#pragma pack(pop)