// Object: UIWeaponClassDescription
// ClassId: 5461
// RuntimeId: 48611
// TypeInfo: 0x0000000144D99910
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponClassDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString ImagePath; // 0x30
    }; // 0x38
    static_assert(sizeof(UIWeaponClassDescription) == 0x38);
}
#pragma pack(pop)