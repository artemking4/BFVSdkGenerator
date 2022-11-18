// Object: UIAbstractRankDescription
// ClassId: 5407
// RuntimeId: 3158
// TypeInfo: 0x0000000144D98110
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

namespace CasablancaShared {
    class UIAbstractRankDescription : public CasablancaShared::UIItemDescription {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x28
        CString SvgImagePath; // 0x30
        CString ImagePath; // 0x38
        CString GlowTexturePath; // 0x40
        CString StreakTexturePath; // 0x48
    }; // 0x50
    static_assert(sizeof(UIAbstractRankDescription) == 0x50);
}