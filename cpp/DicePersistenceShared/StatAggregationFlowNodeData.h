// Object: StatAggregationFlowNodeData
// ClassId: 5262
// RuntimeId: 52084
// TypeInfo: 0x0000000144DCA2C0
#include "../DicePersistenceShared/AbstractStatAggregationFlowNodeData.h"
#include "../DicePersistenceShared/StatAggregationFlowNodeData.h"
#include "../DicePersistenceShared/StatAxiom.h"
#include "../DicePersistenceShared/StatParameterOperator.h"
#include "../DicePersistenceShared/StatAggregationOperator.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatAggregationFlowNodeData : public DicePersistenceShared::AbstractStatAggregationFlowNodeData {
        Array<DicePersistenceShared::StatAggregationFlowNodeData> ChildNodes; // 0x18
        DicePersistenceShared::StatAxiom Axiom; // 0x20
        DicePersistenceShared::StatParameterOperator OutputValuesOperator; // 0x38
        DicePersistenceShared::StatAggregationOperator StatValueOperator; // 0x3C
        Array<CString> TargetStatKeys; // 0x40
    }; // 0x48
    static_assert(sizeof(StatAggregationFlowNodeData) == 0x48);
}
#pragma pack(pop)