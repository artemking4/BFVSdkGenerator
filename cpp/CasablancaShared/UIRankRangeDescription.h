// Object: UIRankRangeDescription
// ClassId: 5439
// RuntimeId: 15851
// TypeInfo: 0x0000000144D97F90
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIRankRangeDescription : public CasablancaShared::UIItemDescription {
        CString Name; // 0x28
        Int32 RanksStart; // 0x30
        Int32 RanksEnd; // 0x34
    }; // 0x38
    static_assert(sizeof(UIRankRangeDescription) == 0x38);
}
#pragma pack(pop)