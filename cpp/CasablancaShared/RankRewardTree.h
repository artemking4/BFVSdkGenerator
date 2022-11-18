// Object: RankRewardTree
// ClassId: 835
// RuntimeId: 34969
// TypeInfo: 0x0000000144DA0AE0
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/AbstractRankReward.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RankRewardTree : public Entity::TreeBase {
        Array<CasablancaShared::AbstractRankReward> Rewards; // 0x20
    }; // 0x28
    static_assert(sizeof(RankRewardTree) == 0x28);
}
#pragma pack(pop)