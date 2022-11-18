// Object: UISoldierClassDescription
// ClassId: 5443
// RuntimeId: 28513
// TypeInfo: 0x0000000144D99F90
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISoldierClassDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x30
        CString ImagePath; // 0x38
    }; // 0x40
    static_assert(sizeof(UISoldierClassDescription) == 0x40);
}
#pragma pack(pop)