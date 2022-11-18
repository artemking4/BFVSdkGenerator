// Object: PbrBoxReflectionVolumeEntityData
// ClassId: 3431
// RuntimeId: 36515
// TypeInfo: 0x0000000144EC2240
#include "../WorldSim/PbrGenericBoxReflectionVolumeEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrBoxReflectionVolumeEntityData : public WorldSim::PbrGenericBoxReflectionVolumeEntityData {
        Core::Vec3 InfluenceFadeNormal; // 0xA0
        Float32 SideFadePosX; // 0xB0
        Float32 SideFadeNegX; // 0xB4
        Float32 SideFadePosY; // 0xB8
        Float32 SideFadeNegY; // 0xBC
        Float32 SideFadePosZ; // 0xC0
        Float32 SideFadeNegZ; // 0xC4
        char pad_0xC8[0x8];
    }; // 0xD0
    static_assert(sizeof(PbrBoxReflectionVolumeEntityData) == 0xD0);
}
#pragma pack(pop)