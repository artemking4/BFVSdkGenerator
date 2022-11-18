// Object: UIGenericPopupWidgetData
// ClassId: 3830
// RuntimeId: 39077
// TypeInfo: 0x0000000144D9B090
#include "../CasablancaShared/UIPopupWidgetData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIGenericPopupWidgetData : public CasablancaShared::UIPopupWidgetData {
        CString Header; // 0x80
        CString Subheader; // 0x88
        CString Text; // 0x90
        CString Button1Text; // 0x98
        CString Button2Text; // 0xA0
        CString Button3Text; // 0xA8
        Boolean Button1Visible; // 0xB0
        Boolean Button2Visible; // 0xB1
        Boolean Button3Visible; // 0xB2
        char pad_0xB3[0xD];
    }; // 0xC0
    static_assert(sizeof(UIGenericPopupWidgetData) == 0xC0);
}
#pragma pack(pop)