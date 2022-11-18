// Object: UIDamageReport
// ClassId: 5385
// RuntimeId: 3634
// TypeInfo: 0x0000000144D22170
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIDamageReportEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDamageReport : public Core::DataContainer {
        Array<CasablancaShared::UIDamageReportEntry> DamageReport; // 0x18
    }; // 0x20
    static_assert(sizeof(UIDamageReport) == 0x20);
}
#pragma pack(pop)