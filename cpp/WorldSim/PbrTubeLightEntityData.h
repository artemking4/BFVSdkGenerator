// Object: PbrTubeLightEntityData
// ClassId: 3394
// RuntimeId: 53838
// TypeInfo: 0x0000000144EC24C0
#include "../WorldSim/PbrAnalyticLightEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrTubeLightEntityData : public WorldSim::PbrAnalyticLightEntityData {
        Float32 TubeRadius; // 0x110
        Float32 TubeWidth; // 0x114
        Boolean OnlyHempishere; // 0x118
        Boolean IsCapsule; // 0x119
        char pad_0x11A[0x6];
    }; // 0x120
    static_assert(sizeof(PbrTubeLightEntityData) == 0x120);
}
#pragma pack(pop)