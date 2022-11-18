// Object: ProjectedDistanceScoreData
// ClassId: 1455
// RuntimeId: 52518
// TypeInfo: 0x0000000144BF0240
#include "../BattleAI/CoverScoreDataWithRefPos.h"
#include "../BattleAI/CoverScoreDirection.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAI {
    class ProjectedDistanceScoreData : public BattleAI::CoverScoreDataWithRefPos {
        BattleAI::CoverScoreDirection RefDirection; // 0x48
        Boolean FlipRefDirection; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(ProjectedDistanceScoreData) == 0x50);
}
#pragma pack(pop)