// Object: RaytraceReflectionComponentData
// ClassId: 1900
// RuntimeId: 6742
// TypeInfo: 0x0000000144EC13C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class RaytraceReflectionComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 MinSmoothness; // 0x90
        Boolean Enable; // 0x94
        Uint8 FieldFlagOverride0; // 0x95
        char pad_0x96[0xA];
    }; // 0xA0
    static_assert(sizeof(RaytraceReflectionComponentData) == 0xA0);
}
#pragma pack(pop)