// Object: SimpleVolumetricsEntityData
// ClassId: 3444
// RuntimeId: 6406
// TypeInfo: 0x0000000144EC1FC0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../WorldSim/SimpleVolumetricsDrawPass.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SimpleVolumetricsEntityData : public Entity::SpatialEntityData {
        Core::Vec3 Emission; // 0x60
        Float32 Exponent; // 0x70
        Float32 FadeOutStartRadius; // 0x74
        Float32 FadeFarDistance; // 0x78
        Float32 EmissionScale; // 0x7C
        WorldSim::SimpleVolumetricsDrawPass DrawPass; // 0x80
        Boolean Enabled; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(SimpleVolumetricsEntityData) == 0x90);
}
#pragma pack(pop)