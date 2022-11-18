// Object: TwinkleStaticBundlesAsset
// ClassId: 850
// RuntimeId: 38391
// TypeInfo: 0x0000000144F66AD0
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleStaticBundlesAsset : public Core::Asset {
        CString ResourceBundlePath; // 0x20
    }; // 0x28
    static_assert(sizeof(TwinkleStaticBundlesAsset) == 0x28);
}
#pragma pack(pop)