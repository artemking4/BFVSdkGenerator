// Object: UIRenderTargetAtlasAsset
// ClassId: 430
// RuntimeId: 61197
// TypeInfo: 0x0000000144F6DEC0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Core/Vec2.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class UIRenderTargetAtlasAsset : public Core::DataContainerPolicyAsset {
        Core::Vec2 Size; // 0x20
        Uint32 AtlasId; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UIRenderTargetAtlasAsset) == 0x30);
}
#pragma pack(pop)