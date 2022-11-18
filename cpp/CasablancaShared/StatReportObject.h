// Object: StatReportObject
// ClassId: 4919
// RuntimeId: 62081
// TypeInfo: 0x0000000144DA02E0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/StatReportObjectEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StatReportObject : public Core::DataContainer {
        Int32 PlayerId; // 0x18
        char pad_0x1C[0x4];
        Array<CasablancaShared::StatReportObjectEntry> Stats; // 0x20
    }; // 0x28
    static_assert(sizeof(StatReportObject) == 0x28);
}
#pragma pack(pop)