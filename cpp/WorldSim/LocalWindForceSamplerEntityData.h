// Object: LocalWindForceSamplerEntityData
// ClassId: 3404
// RuntimeId: 44209
// TypeInfo: 0x0000000144EC9560
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceSamplerEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(LocalWindForceSamplerEntityData) == 0x70);
}
#pragma pack(pop)