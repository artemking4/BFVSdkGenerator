// Object: OriginalLocalLightEntityData
// ClassId: 3387
// RuntimeId: 25105
// TypeInfo: 0x0000000144EC28C0
#include "../WorldSim/LocalLightEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../WorldSim/EnlightenColorMode.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OriginalLocalLightEntityData : public WorldSim::LocalLightEntityData {
        Core::Vec3 Color; // 0x70
        Core::Vec3 EnlightenColorScale; // 0x80
        Core::Vec3 ParticleColorScale; // 0x90
        Float32 Radius; // 0xA0
        Float32 Intensity; // 0xA4
        Float32 AttenuationOffset; // 0xA8
        WorldSim::EnlightenColorMode EnlightenColorMode; // 0xAC
        Float32 ExposureCompensation; // 0xB0
        Boolean DirectLightEnable; // 0xB4
        Boolean SpecularEnable; // 0xB5
        Boolean EnlightenEnable; // 0xB6
        char pad_0xB7[0x9];
    }; // 0xC0
    static_assert(sizeof(OriginalLocalLightEntityData) == 0xC0);
}
#pragma pack(pop)