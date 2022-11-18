// Object: HavokAsset
// ClassId: 527
// RuntimeId: 46930
// TypeInfo: 0x0000000144F0DDC0
#include "../Core/Asset.h"
#include "../Core/DataContainer.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Physics {
    class HavokAsset : public Core::Asset {
        Array<Core::DataContainer> ExternalAssets; // 0x20
        ResourceRef Resource; // 0x28
    }; // 0x30
    static_assert(sizeof(HavokAsset) == 0x30);
}
#pragma pack(pop)