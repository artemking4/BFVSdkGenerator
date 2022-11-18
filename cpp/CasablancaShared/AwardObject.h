// Object: AwardObject
// ClassId: 1188
// RuntimeId: 4734
// TypeInfo: 0x0000000144DA0860
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../CasablancaShared/AwardGroup.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/CriterionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardObject : public Core::DataContainer {
        CString Code; // 0x18
        UIIncubatorShared::LocalizedStringId Name; // 0x20
        UIIncubatorShared::LocalizedStringId Description; // 0x28
        CString ImageName; // 0x30
        CasablancaShared::AwardGroup Group; // 0x38
        Int32 CriteriaCompletionRequirementCount; // 0x3C
        Int32 NumCriteria; // 0x40
        Int32 NumCompletedCriteria; // 0x44
        Array<CasablancaShared::CriterionObject> Criteria; // 0x48
    }; // 0x50
    static_assert(sizeof(AwardObject) == 0x50);
}
#pragma pack(pop)