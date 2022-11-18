// Object: UITtfAsset
// ClassId: 899
// RuntimeId: 17222
// TypeInfo: 0x0000000144E95FB0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class UITtfAsset : public Core::Asset {
        CString FontFamilyName; // 0x20
        ResourceRef FontResource; // 0x28
    }; // 0x30
    static_assert(sizeof(UITtfAsset) == 0x30);
}
#pragma pack(pop)