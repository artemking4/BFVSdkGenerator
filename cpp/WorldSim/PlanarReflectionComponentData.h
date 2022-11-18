// Object: PlanarReflectionComponentData
// ClassId: 1898
// RuntimeId: 34996
// TypeInfo: 0x0000000144EC1D40
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../RenderBase/BlurFilter.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PlanarReflectionComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 KeyColorReflection; // 0x90
        Core::Vec3 SkyColorReflection; // 0xA0
        Core::Vec3 GroundColorReflection; // 0xB0
        Float32 GroundHeight; // 0xC0
        Float32 ViewDistance; // 0xC4
        RenderBase::BlurFilter VerticalBlurFilter; // 0xC8
        Float32 VerticalDeviation; // 0xCC
        RenderBase::BlurFilter HorizontalBlurFilter; // 0xD0
        Float32 HorizontalDeviation; // 0xD4
        Float32 ClippingOffset; // 0xD8
        Uint16 FieldFlagOverride0; // 0xDC
        Boolean Enable; // 0xDE
        Boolean TerrainReflectionsEnable; // 0xDF
        Boolean SkyRenderEnable; // 0xE0
        Boolean OverideOutdoorLightColors; // 0xE1
        char pad_0xE2[0xE];
    }; // 0xF0
    static_assert(sizeof(PlanarReflectionComponentData) == 0xF0);
}
#pragma pack(pop)