// Object: RadiosityModifierEntityData
// ClassId: 3438
// RuntimeId: 17547
// TypeInfo: 0x0000000144EC2C40
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class RadiosityModifierEntityData : public Entity::SpatialEntityData {
        Float32 BounceScale; // 0x60
        Float32 SunScale; // 0x64
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(RadiosityModifierEntityData) == 0x70);
}
#pragma pack(pop)