// Object: SkyCelestialSingleComponentData
// ClassId: 1909
// RuntimeId: 29598
// TypeInfo: 0x0000000144EC11C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/QualityScalableBool.h"
#include "../Global/Uint32.h"
#include "../Render/TextureAsset.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SkyCelestialSingleComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 Tint; // 0x90
        Uint32 DrawOrder; // 0xA0
        char pad_0xA4[0x4];
        Render::TextureAsset Texture; // 0xA8
        Core::Vec2 UVStart; // 0xB0
        Core::Vec2 UVEnd; // 0xB8
        Float32 SkyEnvmapTintScale; // 0xC0
        Float32 Longitude; // 0xC4
        Float32 Latitude; // 0xC8
        Float32 Rotation; // 0xCC
        Core::Vec2 Scale; // 0xD0
        Uint16 FieldFlagOverride0; // 0xD8
        Boolean Enable; // 0xDA
        Core::QualityScalableBool EnabledOnQualityLevels; // 0xDB
        Core::QualityScalableBool PlanarReflection; // 0xE0
        Boolean RenderInSkyEnvMap; // 0xE5
        Boolean WriteAlpha; // 0xE6
        char pad_0xE7[0x9];
    }; // 0xF0
    static_assert(sizeof(SkyCelestialSingleComponentData) == 0xF0);
}
#pragma pack(pop)