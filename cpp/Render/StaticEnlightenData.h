// Object: StaticEnlightenData
// ClassId: 766
// RuntimeId: 7329
// TypeInfo: 0x0000000144F16E50
#include "../RenderBase/StaticEnlightenBaseAsset.h"
#include "../Render/TextureAsset.h"
#include "../Core/PlatformScalableBool.h"
#include "../Global/Boolean.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Render {
    class StaticEnlightenData : public RenderBase::StaticEnlightenBaseAsset {
        Render::TextureAsset StaticIrradianceTexture; // 0x20
        ResourceRef DatabaseResource; // 0x28
        Render::TextureAsset StaticDirectionTexture; // 0x30
        Render::TextureAsset StaticDirectionTextureG; // 0x38
        Render::TextureAsset StaticDirectionTextureB; // 0x40
        Core::PlatformScalableBool StaticEnable; // 0x48
        Boolean AmbientOcclusionTextureCompressionEnable; // 0x51
        Boolean IrradianceTextureCompressionEnable; // 0x52
        char pad_0x53[0x5];
    }; // 0x58
    static_assert(sizeof(StaticEnlightenData) == 0x58);
}
#pragma pack(pop)