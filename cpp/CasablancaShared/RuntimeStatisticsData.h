// Object: RuntimeStatisticsData
// ClassId: 4579
// RuntimeId: 3539
// TypeInfo: 0x0000000144D2AE20
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/RuntimeStatsDataType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RuntimeStatisticsData : public Core::DataContainer {
        Array<CString> Codes; // 0x18
        Array<Uint32> CodeHashes; // 0x20
        CasablancaShared::RuntimeStatsDataType StatsType; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RuntimeStatisticsData) == 0x30);
}
#pragma pack(pop)