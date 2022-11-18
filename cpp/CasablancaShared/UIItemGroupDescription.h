// Object: UIItemGroupDescription
// ClassId: 5428
// RuntimeId: 17720
// TypeInfo: 0x0000000144D99190
#include "../CasablancaShared/UIItemDescription.h"
#include "../Global/Int32.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIItemGroupDescription : public CasablancaShared::UIItemDescription {
        Int32 ItemsInGroup; // 0x28
        char pad_0x2C[0x4];
        UIIncubatorShared::LocalizedStringId NameSid; // 0x30
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x38
        CString ImagePath; // 0x40
        CString BackgroundImagePath; // 0x48
    }; // 0x50
    static_assert(sizeof(UIItemGroupDescription) == 0x50);
}
#pragma pack(pop)