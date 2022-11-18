// Object: LinearMediaAssetDesc
// ClassId: 545
// RuntimeId: 39488
// TypeInfo: 0x0000000144EA0500
#include "../Core/Asset.h"
#include "../LinearMedia/LinearMediaRuntimeResource.h"

#pragma pack(push, 8)
namespace LinearMedia {
    class LinearMediaAssetDesc : public Core::Asset {
        Array<LinearMedia::LinearMediaRuntimeResource> Resources; // 0x20
    }; // 0x28
    static_assert(sizeof(LinearMediaAssetDesc) == 0x28);
}
#pragma pack(pop)