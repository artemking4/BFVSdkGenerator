// Object: RankGateListAsset
// ClassId: 684
// RuntimeId: 59765
// TypeInfo: 0x0000000144DC7900
#include "../Core/Asset.h"
#include "../DicePersistenceShared/RankData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class RankGateListAsset : public Core::Asset {
        Array<DicePersistenceShared::RankData> Ranks; // 0x20
    }; // 0x28
    static_assert(sizeof(RankGateListAsset) == 0x28);
}
#pragma pack(pop)