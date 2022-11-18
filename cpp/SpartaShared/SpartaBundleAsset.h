// Object: SpartaBundleAsset
// ClassId: 756
// RuntimeId: 64006
// TypeInfo: 0x0000000144F50E40
#include "../Core/Asset.h"
#include "../SpartaShared/SpartaDataAsset.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaBundleAsset : public Core::Asset {
        Array<SpartaShared::SpartaDataAsset> SpartaBundledAssets; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaBundleAsset) == 0x28);
}
#pragma pack(pop)