// Object: SkyEffectState
// ClassId: 4631
// RuntimeId: 3428
// TypeInfo: 0x0000000144EC0E40
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Render/TextureAsset.h"
#include "../Core/Vec3.h"
#include "../WorldSim/SkyCloudLayer.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SkyEffectState : public Core::DataContainer {
        Float32 SunSize; // 0x18
        Float32 SunScale; // 0x1C
        Core::Vec3 CloudLayerSunColor; // 0x20
        WorldSim::SkyCloudLayer CloudLayer1; // 0x30
        WorldSim::SkyCloudLayer CloudLayer2; // 0x70
        Float32 SkyGradientScale; // 0xB0
        char pad_0xB4[0x4];
        Render::TextureAsset SkyGradientTexture; // 0xB8
        Float32 PanoramicUVMinX; // 0xC0
        Float32 PanoramicUVMaxX; // 0xC4
        Float32 PanoramicUVMinY; // 0xC8
        Float32 PanoramicUVMaxY; // 0xCC
        Float32 PanoramicTileFactor; // 0xD0
        Float32 PanoramicRotation; // 0xD4
        Render::TextureAsset PanoramicTexture; // 0xD8
        Render::TextureAsset PanoramicAlphaTexture; // 0xE0
        Render::TextureAsset CloudLayerMaskTexture; // 0xE8
        Render::TextureAsset StaticEnvmapTexture; // 0xF0
        Float32 WindDirection; // 0xF8
        Boolean Enable; // 0xFC
        char pad_0xFD[0x3];
    }; // 0x100
    static_assert(sizeof(SkyEffectState) == 0x100);
}
#pragma pack(pop)