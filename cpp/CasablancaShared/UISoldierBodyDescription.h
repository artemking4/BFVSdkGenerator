// Object: UISoldierBodyDescription
// ClassId: 5441
// RuntimeId: 25007
// TypeInfo: 0x0000000144D99F10
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISoldierBodyDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        UIIncubatorShared::LocalizedStringId FullNameSid; // 0x30
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x38
        CString ImagePath; // 0x40
    }; // 0x48
    static_assert(sizeof(UISoldierBodyDescription) == 0x48);
}
#pragma pack(pop)