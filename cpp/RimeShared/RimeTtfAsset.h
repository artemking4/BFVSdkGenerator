// Object: RimeTtfAsset
// ClassId: 713
// RuntimeId: 7119
// TypeInfo: 0x0000000144F27410
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeTtfAsset : public Core::Asset {
        CString FontFamilyName; // 0x20
        ResourceRef FontResource; // 0x28
        Boolean Italic; // 0x30
        Boolean Bold; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(RimeTtfAsset) == 0x38);
}
#pragma pack(pop)