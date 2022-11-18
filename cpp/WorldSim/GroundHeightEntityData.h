// Object: GroundHeightEntityData
// ClassId: 3377
// RuntimeId: 52995
// TypeInfo: 0x0000000144EC2A40
#include "../Entity/SpatialEntityData.h"
#include "../WorldSim/GroundHeightData.h"

#pragma pack(push, 16)
namespace WorldSim {
    class GroundHeightEntityData : public Entity::SpatialEntityData {
        WorldSim::GroundHeightData Data; // 0x60
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(GroundHeightEntityData) == 0x80);
}
#pragma pack(pop)