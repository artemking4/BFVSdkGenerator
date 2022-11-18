// Object: AggregatedRanks
// ClassId: 143
// RuntimeId: 19945
// TypeInfo: 0x0000000144DC7700
#include "../Core/Asset.h"
#include "../DicePersistenceShared/RankSyncInfo.h"
#include "../DicePersistenceShared/AssetReference.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class AggregatedRanks : public Core::Asset {
        DicePersistenceShared::RankSyncInfo RankSyncInfo; // 0x20
        Array<DicePersistenceShared::AssetReference> RuntimeRanks; // 0x38
    }; // 0x40
    static_assert(sizeof(AggregatedRanks) == 0x40);
}
#pragma pack(pop)