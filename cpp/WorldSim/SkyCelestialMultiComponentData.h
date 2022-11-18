// Object: SkyCelestialMultiComponentData
// ClassId: 1907
// RuntimeId: 11913
// TypeInfo: 0x0000000144EC1140
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/QualityScalableBool.h"
#include "../Global/Uint32.h"
#include "../Core/QualityScalableInt.h"
#include "../Render/TextureAsset.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SkyCelestialMultiComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 Tint; // 0x90
        Uint32 DrawOrder; // 0xA0
        Core::QualityScalableInt QuadCount; // 0xA4
        Render::TextureAsset Texture; // 0xB8
        Core::Vec2 UVStart; // 0xC0
        Core::Vec2 UVEnd; // 0xC8
        Core::Vec2 UVGrid; // 0xD0
        Float32 SkyEnvmapTintScale; // 0xD8
        Int32 RandomSeed; // 0xDC
        Float32 MinScale; // 0xE0
        Float32 MaxScale; // 0xE4
        Float32 ScaleMultiplier; // 0xE8
        Float32 ZenithStop; // 0xEC
        Float32 NadirStop; // 0xF0
        Uint32 FieldFlagOverride0; // 0xF4
        Boolean Enable; // 0xF8
        Core::QualityScalableBool EnabledOnQualityLevels; // 0xF9
        Core::QualityScalableBool PlanarReflection; // 0xFE
        Boolean RenderInSkyEnvMap; // 0x103
        Boolean WriteAlpha; // 0x104
        char pad_0x105[0xB];
    }; // 0x110
    static_assert(sizeof(SkyCelestialMultiComponentData) == 0x110);
}
#pragma pack(pop)