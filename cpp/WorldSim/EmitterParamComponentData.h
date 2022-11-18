// Object: EmitterParamComponentData
// ClassId: 1884
// RuntimeId: 42890
// TypeInfo: 0x0000000144EC1340
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../WorldSim/EmitterParamOverride.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class EmitterParamComponentData : public Entity::VisualEnvironmentComponentData {
        WorldSim::EmitterParamOverride Parameter; // 0x90
        Float32 Value; // 0x94
        Uint8 FieldFlagOverride0; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(EmitterParamComponentData) == 0xA0);
}
#pragma pack(pop)