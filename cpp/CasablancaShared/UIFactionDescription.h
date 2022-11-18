// Object: UIFactionDescription
// ClassId: 5415
// RuntimeId: 5936
// TypeInfo: 0x0000000144D9A010
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIFactionDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString FlagImagePath; // 0x30
        CString FlagColourImagePath; // 0x38
        CString PlateImagePath; // 0x40
        CString ImagePath; // 0x48
        UIIncubatorShared::LocalizedStringId CountrySid; // 0x50
    }; // 0x58
    static_assert(sizeof(UIFactionDescription) == 0x58);
}
#pragma pack(pop)