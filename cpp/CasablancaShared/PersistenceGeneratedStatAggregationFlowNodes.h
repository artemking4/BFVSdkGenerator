// Object: PersistenceGeneratedStatAggregationFlowNodes
// ClassId: 838
// RuntimeId: 30608
// TypeInfo: 0x0000000144DA2D80
#include "../DicePersistenceShared/StatAggregationFlowData.h"
#include "../CasablancaShared/PersistenceWeaponConfigurations.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceGeneratedStatAggregationFlowNodes : public DicePersistenceShared::StatAggregationFlowData {
        Array<CasablancaShared::PersistenceWeaponConfigurations> PersistenceWeaponConfigurations; // 0x28
    }; // 0x30
    static_assert(sizeof(PersistenceGeneratedStatAggregationFlowNodes) == 0x30);
}
#pragma pack(pop)