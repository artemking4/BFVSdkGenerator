// Object: AwardReportObject
// ClassId: 1190
// RuntimeId: 1251
// TypeInfo: 0x0000000144DA0760
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/AwardGroup.h"
#include "../CasablancaShared/CriterionReportObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardReportObject : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId Name; // 0x18
        UIIncubatorShared::LocalizedStringId Description; // 0x20
        CString Code; // 0x28
        Int32 Gained; // 0x30
        Int32 MinimumRequiredCriteria; // 0x34
        CasablancaShared::AwardGroup Group; // 0x38
        char pad_0x3C[0x4];
        Array<CasablancaShared::CriterionReportObject> Criteria; // 0x40
        Boolean Completed; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(AwardReportObject) == 0x50);
}
#pragma pack(pop)