// Object: RankReward
// ClassId: 5252
// RuntimeId: 44398
// TypeInfo: 0x0000000144DA0D60
#include "../CasablancaShared/AbstractRankReward.h"
#include "../DicePersistenceShared/RankGateListAsset.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/RankTypeParametersData.h"
#include "../CasablancaShared/CatalogItemData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RankReward : public CasablancaShared::AbstractRankReward {
        DicePersistenceShared::RankGateListAsset GateList; // 0x18
        Int32 RankIndex; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::RankTypeParametersData RankParameter; // 0x28
        CasablancaShared::CatalogItemData CatalogItem; // 0x30
    }; // 0x38
    static_assert(sizeof(RankReward) == 0x38);
}
#pragma pack(pop)