// Object: UIWebViewWidgetData
// ClassId: 3847
// RuntimeId: 42097
// TypeInfo: 0x0000000144D9B610
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIWebViewWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        CString URL; // 0x80
        Boolean Persistent; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(UIWebViewWidgetData) == 0x90);
}
#pragma pack(pop)