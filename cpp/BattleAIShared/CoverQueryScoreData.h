// Object: CoverQueryScoreData
// ClassId: 230
// RuntimeId: 12492
// TypeInfo: 0x0000000144C05DE0
#include "../Core/Asset.h"
#include "../BattleAIShared/CoverQueryScoreBase.h"
#include "../BattleAIShared/CoverQueryScoreRuntime.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverQueryScoreData : public Core::Asset {
        Array<BattleAIShared::CoverQueryScoreBase> Scores; // 0x20
        Array<BattleAIShared::CoverQueryScoreRuntime> RuntimeScores; // 0x28
    }; // 0x30
    static_assert(sizeof(CoverQueryScoreData) == 0x30);
}
#pragma pack(pop)