// Object: WebBrowserSettings
// ClassId: 5043
// RuntimeId: 691
// TypeInfo: 0x0000000144F7BC60
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../WebBrowserShared/WebBrowserBundleAsset.h"

#pragma pack(push, 8)
namespace WebBrowserShared {
    class WebBrowserSettings : public Core::SystemSettings {
        CString ApplicationName; // 0x20
        CString StandardFont; // 0x28
        CString SerifFont; // 0x30
        CString SansSerifFont; // 0x38
        CString MonospaceFont; // 0x40
        CString CursiveFont; // 0x48
        CString FantasyFont; // 0x50
        CString SystemFont; // 0x58
        CString DefaultCSS; // 0x60
        WebBrowserShared::WebBrowserBundleAsset WebBrowserBundle; // 0x68
        Boolean SystemFontBold; // 0x70
        Boolean PerLevelWebBrowserEnable; // 0x71
        char pad_0x72[0x6];
    }; // 0x78
    static_assert(sizeof(WebBrowserSettings) == 0x78);
}
#pragma pack(pop)