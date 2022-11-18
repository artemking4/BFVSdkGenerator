// Object: BFUIStaticBundlesAsset
// ClassId: 183
// RuntimeId: 24073
// TypeInfo: 0x0000000144D303A0
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIStaticBundlesAsset : public Core::Asset {
        CString ResourceBundlePath; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIStaticBundlesAsset) == 0x28);
}
#pragma pack(pop)