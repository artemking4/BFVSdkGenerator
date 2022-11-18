// Object: WebBrowserBundleAsset
// ClassId: 913
// RuntimeId: 56969
// TypeInfo: 0x0000000144F7BD60
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace WebBrowserShared {
    class WebBrowserBundleAsset : public Core::Asset {
        CString BundlePath; // 0x20
        Array<CString> Fonts; // 0x28
        Array<CString> LocalURLs; // 0x30
    }; // 0x38
    static_assert(sizeof(WebBrowserBundleAsset) == 0x38);
}
#pragma pack(pop)