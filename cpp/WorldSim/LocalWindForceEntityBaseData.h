// Object: LocalWindForceEntityBaseData
// ClassId: 3400
// RuntimeId: 10720
// TypeInfo: 0x0000000144EC95E0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../WorldSim/ForceGroupAsset.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceEntityBaseData : public Entity::SpatialEntityData {
        Float32 Strength; // 0x60
        Float32 Variation; // 0x64
        Float32 VariationRate; // 0x68
        Float32 MicroVariation; // 0x6C
        Float32 Hardness; // 0x70
        Float32 ForceAsInstantVelocity; // 0x74
        Uint32 Id; // 0x78
        char pad_0x7C[0x4];
        WorldSim::ForceGroupAsset ForceGroup; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(LocalWindForceEntityBaseData) == 0x90);
}
#pragma pack(pop)