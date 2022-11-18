// Object: StatAggregationData
// ClassId: 759
// RuntimeId: 39233
// TypeInfo: 0x0000000144DCA4C0
#include "../Core/Asset.h"
#include "../DicePersistenceShared/AssetReference.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatAggregationData : public Core::Asset {
        Array<DicePersistenceShared::AssetReference> RuntimeRootNodes; // 0x20
    }; // 0x28
    static_assert(sizeof(StatAggregationData) == 0x28);
}
#pragma pack(pop)