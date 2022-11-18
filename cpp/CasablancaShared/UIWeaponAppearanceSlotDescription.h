// Object: UIWeaponAppearanceSlotDescription
// ClassId: 5460
// RuntimeId: 20293
// TypeInfo: 0x0000000144D99890
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIWeaponAppearanceSlotDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString ImagePath; // 0x30
        Boolean HideSocketInUI; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UIWeaponAppearanceSlotDescription) == 0x40);
}
#pragma pack(pop)