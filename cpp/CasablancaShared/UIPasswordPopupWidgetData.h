// Object: UIPasswordPopupWidgetData
// ClassId: 3832
// RuntimeId: 59039
// TypeInfo: 0x0000000144D9AE90
#include "../CasablancaShared/UIPopupWidgetData.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIPasswordPopupWidgetData : public CasablancaShared::UIPopupWidgetData {
        CString PasswordInput; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(UIPasswordPopupWidgetData) == 0x90);
}
#pragma pack(pop)