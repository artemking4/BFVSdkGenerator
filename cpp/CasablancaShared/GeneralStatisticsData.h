// Object: GeneralStatisticsData
// ClassId: 832
// RuntimeId: 13252
// TypeInfo: 0x0000000144D2AEA0
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/RuntimeCriteriaStatistics.h"
#include "../Global/CString.h"
#include "../Global/Int16.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GeneralStatisticsData : public Entity::TreeBase {
        Array<CasablancaShared::RuntimeCriteriaStatistics> CriteriaStatistics; // 0x20
        Array<CString> StatNames; // 0x28
        Array<Int16> CategoryParents; // 0x30
        Array<Uint32> CategoryAddresses; // 0x38
    }; // 0x40
    static_assert(sizeof(GeneralStatisticsData) == 0x40);
}
#pragma pack(pop)