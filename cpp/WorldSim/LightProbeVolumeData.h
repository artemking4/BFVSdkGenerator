// Object: LightProbeVolumeData
// ClassId: 3383
// RuntimeId: 45801
// TypeInfo: 0x0000000144EC2740
#include "../Entity/SpatialEntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LightProbeVolumeData : public Entity::SpatialEntityData {
        Uint32 Xres; // 0x60
        Uint32 Yres; // 0x64
        Uint32 Zres; // 0x68
        Float32 BlendDistance; // 0x6C
        Int32 Priority; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(LightProbeVolumeData) == 0x80);
}
#pragma pack(pop)