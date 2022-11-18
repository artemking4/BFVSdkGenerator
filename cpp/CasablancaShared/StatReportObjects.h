// Object: StatReportObjects
// ClassId: 4921
// RuntimeId: 60896
// TypeInfo: 0x0000000144DA0260
#include "../Core/DataContainer.h"
#include "../CasablancaShared/StatReportObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StatReportObjects : public Core::DataContainer {
        Array<CasablancaShared::StatReportObject> Stats; // 0x18
    }; // 0x20
    static_assert(sizeof(StatReportObjects) == 0x20);
}
#pragma pack(pop)