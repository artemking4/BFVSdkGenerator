// Object: RankRewardTreeResult
// ClassId: 4558
// RuntimeId: 63998
// TypeInfo: 0x0000000144DA0A60
#include "../Core/DataContainer.h"
#include "../CasablancaShared/RankRewardResult.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RankRewardTreeResult : public Core::DataContainer {
        Array<CasablancaShared::RankRewardResult> Rewards; // 0x18
    }; // 0x20
    static_assert(sizeof(RankRewardTreeResult) == 0x20);
}
#pragma pack(pop)