// Object: LocalPlanarReflectionEntityData
// ClassId: 3399
// RuntimeId: 13596
// TypeInfo: 0x0000000144EC2140
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../WorldSim/LPROverrideKeyLightLuminance.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalPlanarReflectionEntityData : public Entity::SpatialEntityData {
        Core::Vec3 KeyLightLuminance; // 0x60
        Core::Vec3 KeyLightDirection; // 0x70
        Float32 FarPlane; // 0x80
        Float32 DistanceTolerance; // 0x84
        Float32 DistanceFalloff; // 0x88
        Float32 NormalTolerance; // 0x8C
        Float32 NormalFalloff; // 0x90
        WorldSim::LPROverrideKeyLightLuminance OverrideKeyLightLuminance; // 0x94
        Float32 LuminanceScale; // 0x98
        Float32 Opacity; // 0x9C
        Float32 RoughnessTolerance; // 0xA0
        Float32 RoughnessFalloff; // 0xA4
        Boolean Enable; // 0xA8
        Boolean TerrainReflectionsEnable; // 0xA9
        Boolean SkyReflectionEnable; // 0xAA
        Boolean OverrideKeyLightDirection; // 0xAB
        char pad_0xAC[0x4];
    }; // 0xB0
    static_assert(sizeof(LocalPlanarReflectionEntityData) == 0xB0);
}
#pragma pack(pop)