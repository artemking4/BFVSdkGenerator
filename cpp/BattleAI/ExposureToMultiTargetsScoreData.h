// Object: ExposureToMultiTargetsScoreData
// ClassId: 1468
// RuntimeId: 1288
// TypeInfo: 0x0000000144BEFF40
#include "../BattleAI/CoverScoreData.h"
#include "../Global/Boolean.h"
#include "../BattleAI/MultiTargetScoringMode.h"
#include "../BattleAI/ExposureScoreBucket.h"

#pragma pack(push, 8)
namespace BattleAI {
    class ExposureToMultiTargetsScoreData : public BattleAI::CoverScoreData {
        BattleAI::MultiTargetScoringMode ScoringMode; // 0x30
        char pad_0x34[0x4];
        Array<BattleAI::ExposureScoreBucket> ScoreCurveBuckets; // 0x38
        Boolean ExcludePrimaryTarget; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(ExposureToMultiTargetsScoreData) == 0x48);
}
#pragma pack(pop)