// Object: IndirectSpecularComponentData
// ClassId: 1890
// RuntimeId: 55940
// TypeInfo: 0x0000000144EC1F40
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class IndirectSpecularComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 Intensity; // 0x90
        Float32 ReflectanceScale; // 0x94
        Float32 ProbesIntensity; // 0x98
        Float32 ProbesReflectanceScale; // 0x9C
        Boolean Enabled; // 0xA0
        Uint8 FieldFlagOverride0; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(IndirectSpecularComponentData) == 0xB0);
}
#pragma pack(pop)