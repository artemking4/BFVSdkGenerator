// Object: UIRenderTargetRegionAsset
// ClassId: 431
// RuntimeId: 39700
// TypeInfo: 0x0000000144F6DE40
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class UIRenderTargetRegionAsset : public Core::DataContainerPolicyAsset {
        Uint32 AtlasId; // 0x20
        Uint32 RegionId; // 0x24
    }; // 0x28
    static_assert(sizeof(UIRenderTargetRegionAsset) == 0x28);
}
#pragma pack(pop)