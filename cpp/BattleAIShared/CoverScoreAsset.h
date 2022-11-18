// Object: CoverScoreAsset
// ClassId: 231
// RuntimeId: 31382
// TypeInfo: 0x0000000144C07160
#include "../Core/Asset.h"
#include "../BattleAIShared/CoverScoreDataBase.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverScoreAsset : public Core::Asset {
        Array<BattleAIShared::CoverScoreDataBase> Scores; // 0x20
    }; // 0x28
    static_assert(sizeof(CoverScoreAsset) == 0x28);
}
#pragma pack(pop)