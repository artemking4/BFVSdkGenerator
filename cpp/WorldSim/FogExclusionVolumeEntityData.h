// Object: FogExclusionVolumeEntityData
// ClassId: 3372
// RuntimeId: 313
// TypeInfo: 0x0000000144EC2B40
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../WorldSim/FogExclusionVolumeShape.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class FogExclusionVolumeEntityData : public Entity::SpatialEntityData {
        WorldSim::FogExclusionVolumeShape FogExclusionVolumeShape; // 0x60
        Float32 FogVolumeStrength; // 0x64
        Float32 FadeOutStart; // 0x68
        Float32 FadeOutEnd; // 0x6C
        Boolean Enabled; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(FogExclusionVolumeEntityData) == 0x80);
}
#pragma pack(pop)