// Object: WebBrowserLocalURLAsset
// ClassId: 914
// RuntimeId: 57762
// TypeInfo: 0x0000000144F7BDE0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../GameShared/RawFileDataAsset.h"

#pragma pack(push, 8)
namespace WebBrowserShared {
    class WebBrowserLocalURLAsset : public Core::Asset {
        CString LocalPath; // 0x20
        GameShared::RawFileDataAsset File; // 0x28
    }; // 0x30
    static_assert(sizeof(WebBrowserLocalURLAsset) == 0x30);
}
#pragma pack(pop)