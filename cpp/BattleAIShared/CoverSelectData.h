// Object: CoverSelectData
// ClassId: 1473
// RuntimeId: 62419
// TypeInfo: 0x0000000144C06EE0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/CoverQuerySpatialBase.h"
#include "../BattleAIShared/CoverScoreAsset.h"
#include "../BattleAIShared/CoverScoreDataBase.h"
#include "../BattleAIShared/CoverScoreExecutionParams.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverSelectData : public Core::DataContainer {
        BattleAIShared::CoverQuerySpatialBase SpatialFilter; // 0x18
        BattleAIShared::CoverQuerySpatialBase FallbackSpatialFilter; // 0x20
        BattleAIShared::CoverScoreAsset CommonScores; // 0x28
        Array<BattleAIShared::CoverScoreDataBase> Scores; // 0x30
        BattleAIShared::CoverScoreExecutionParams ExecutionParams; // 0x38
        Boolean RestrictToDefendArea; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(CoverSelectData) == 0x60);
}
#pragma pack(pop)