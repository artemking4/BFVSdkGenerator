// Object: ShadowControlComponentData
// ClassId: 1905
// RuntimeId: 49172
// TypeInfo: 0x0000000144EC10C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class ShadowControlComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 SpotLightShadowMaxAngle; // 0x90
        Float32 SpotLightShadowFadeOutRange; // 0x94
        Boolean Enable; // 0x98
        Uint8 FieldFlagOverride0; // 0x99
        char pad_0x9A[0x6];
    }; // 0xA0
    static_assert(sizeof(ShadowControlComponentData) == 0xA0);
}
#pragma pack(pop)