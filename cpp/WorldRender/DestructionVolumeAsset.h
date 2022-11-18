// Object: DestructionVolumeAsset
// ClassId: 466
// RuntimeId: 26877
// TypeInfo: 0x0000000144EB9BE0
#include "../WorldBase/DestructionVolumeBaseAsset.h"
#include "../Render/TextureAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WorldRender {
    class DestructionVolumeAsset : public WorldBase::DestructionVolumeBaseAsset {
        Render::TextureAsset DiffuseAtlas; // 0x20
        Render::TextureAsset NormalmapAtlas; // 0x28
        Float32 AtlasTextureScale; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(DestructionVolumeAsset) == 0x38);
}
#pragma pack(pop)