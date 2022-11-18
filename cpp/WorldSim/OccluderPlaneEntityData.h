// Object: OccluderPlaneEntityData
// ClassId: 3424
// RuntimeId: 18850
// TypeInfo: 0x0000000144EC31C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OccluderPlaneEntityData : public Entity::SpatialEntityData {
        Float32 CoverageValue; // 0x60
        Boolean OccluderHighPriority; // 0x64
        Boolean OccluderIsConservative; // 0x65
        Boolean DoubledSided; // 0x66
        Boolean Visible; // 0x67
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(OccluderPlaneEntityData) == 0x70);
}
#pragma pack(pop)