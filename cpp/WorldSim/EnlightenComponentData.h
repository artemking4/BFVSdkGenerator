// Object: EnlightenComponentData
// ClassId: 1886
// RuntimeId: 5533
// TypeInfo: 0x0000000144EC19C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../WorldSim/SkyBoxBlendMode.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class EnlightenComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 TerrainColor; // 0x90
        Core::Vec3 SkyBoxSkyColor; // 0xA0
        Core::Vec3 SkyBoxGroundColor; // 0xB0
        Core::Vec3 SkyBoxSunLightColor; // 0xC0
        Core::Vec3 SkyBoxBackLightColor; // 0xD0
        Core::Vec3 OpaqueAlphaTestSimpleScale; // 0xE0
        Float32 BounceScale; // 0xF0
        Float32 SunScale; // 0xF4
        Float32 CullDistance; // 0xF8
        Float32 CullRadius; // 0xFC
        WorldSim::SkyBoxBlendMode SkyBoxBlendMode; // 0x100
        Float32 SkyBoxBlend; // 0x104
        Float32 SkyBoxSunLightColorSize; // 0x108
        Float32 SkyBoxBackLightColorSize; // 0x10C
        Float32 SkyBoxBackLightRotationX; // 0x110
        Float32 SkyBoxBackLightRotationY; // 0x114
        Uint32 FieldFlagOverride0; // 0x118
        Boolean SkyBoxEnable; // 0x11C
        Boolean SkyBoxCutBottom; // 0x11D
        char pad_0x11E[0x2];
    }; // 0x120
    static_assert(sizeof(EnlightenComponentData) == 0x120);
}
#pragma pack(pop)