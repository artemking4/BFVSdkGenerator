// Object: PbrSphereReflectionVolumeEntityData
// ClassId: 3433
// RuntimeId: 53408
// TypeInfo: 0x0000000144EC22C0
#include "../WorldSim/PbrReflectionVolumeEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrSphereReflectionVolumeEntityData : public WorldSim::PbrReflectionVolumeEntityData {
        Float32 InfluenceFadeNormal; // 0x90
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(PbrSphereReflectionVolumeEntityData) == 0xA0);
}
#pragma pack(pop)