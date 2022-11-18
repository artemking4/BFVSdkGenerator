// Object: StatReportObjectEntry
// ClassId: 4920
// RuntimeId: 41925
// TypeInfo: 0x0000000144DA0360
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StatReportObjectEntry : public Core::DataContainer {
        CString Key; // 0x18
        Int32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(StatReportObjectEntry) == 0x28);
}
#pragma pack(pop)