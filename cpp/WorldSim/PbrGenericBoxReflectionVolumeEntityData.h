// Object: PbrGenericBoxReflectionVolumeEntityData
// ClassId: 3430
// RuntimeId: 2555
// TypeInfo: 0x0000000144EC2340
#include "../WorldSim/PbrReflectionVolumeEntityData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrGenericBoxReflectionVolumeEntityData : public WorldSim::PbrReflectionVolumeEntityData {
        Core::Vec3 LocalOffset; // 0x90
    }; // 0xA0
    static_assert(sizeof(PbrGenericBoxReflectionVolumeEntityData) == 0xA0);
}
#pragma pack(pop)