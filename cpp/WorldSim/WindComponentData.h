// Object: WindComponentData
// ClassId: 1915
// RuntimeId: 49715
// TypeInfo: 0x0000000144EC1C40
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class WindComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 WindDirection; // 0x90
        Float32 WindStrength; // 0x94
        Float32 WindVariationMultiplier; // 0x98
        Float32 WindVariationRateMultiplier; // 0x9C
        Float32 WindMicroVariationMultiplier; // 0xA0
        Float32 TurbulenceMultiplier; // 0xA4
        Float32 TurbulenceScale; // 0xA8
        Uint8 FieldFlagOverride0; // 0xAC
        char pad_0xAD[0x3];
    }; // 0xB0
    static_assert(sizeof(WindComponentData) == 0xB0);
}
#pragma pack(pop)