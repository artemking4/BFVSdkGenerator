// Object: OccluderVolumeEntityData
// ClassId: 3426
// RuntimeId: 600
// TypeInfo: 0x0000000144EC3240
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OccluderVolumeEntityData : public Entity::SpatialEntityData {
        Float32 CoverageValue; // 0x60
        Boolean OccluderHighPriority; // 0x64
        Boolean OccluderIsConservative; // 0x65
        Boolean Visible; // 0x66
        char pad_0x67[0x9];
    }; // 0x70
    static_assert(sizeof(OccluderVolumeEntityData) == 0x70);
}
#pragma pack(pop)