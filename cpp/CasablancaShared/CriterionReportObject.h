// Object: CriterionReportObject
// ClassId: 1478
// RuntimeId: 43853
// TypeInfo: 0x0000000144DA07E0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CriterionReportObject : public Core::DataContainer {
        Int32 AimValue; // 0x18
        Int32 Value; // 0x1C
    }; // 0x20
    static_assert(sizeof(CriterionReportObject) == 0x20);
}
#pragma pack(pop)