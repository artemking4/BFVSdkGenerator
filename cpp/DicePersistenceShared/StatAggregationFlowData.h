// Object: StatAggregationFlowData
// ClassId: 837
// RuntimeId: 33390
// TypeInfo: 0x0000000144DCA440
#include "../Entity/TreeBase.h"
#include "../DicePersistenceShared/StatAggregationFlowNodeData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatAggregationFlowData : public Entity::TreeBase {
        Array<DicePersistenceShared::StatAggregationFlowNodeData> RootNodes; // 0x20
    }; // 0x28
    static_assert(sizeof(StatAggregationFlowData) == 0x28);
}
#pragma pack(pop)