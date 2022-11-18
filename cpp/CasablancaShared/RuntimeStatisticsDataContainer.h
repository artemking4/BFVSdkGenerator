// Object: RuntimeStatisticsDataContainer
// ClassId: 715
// RuntimeId: 46380
// TypeInfo: 0x0000000144D2ADA0
#include "../Core/Asset.h"
#include "../CasablancaShared/RuntimeStatisticsData.h"
#include "../DicePersistenceShared/StatCategoryData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RuntimeStatisticsDataContainer : public Core::Asset {
        Array<CasablancaShared::RuntimeStatisticsData> RuntimeStatistics; // 0x20
        Array<DicePersistenceShared::StatCategoryData> WeaponStatBlacklist; // 0x28
    }; // 0x30
    static_assert(sizeof(RuntimeStatisticsDataContainer) == 0x30);
}
#pragma pack(pop)