// Object: UIAppearanceVariantDescription
// ClassId: 5410
// RuntimeId: 45185
// TypeInfo: 0x0000000144D99290
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIAppearanceVariantDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString ImagePath; // 0x30
    }; // 0x38
    static_assert(sizeof(UIAppearanceVariantDescription) == 0x38);
}
#pragma pack(pop)