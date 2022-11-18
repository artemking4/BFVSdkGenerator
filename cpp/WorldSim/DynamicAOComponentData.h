// Object: DynamicAOComponentData
// ClassId: 1882
// RuntimeId: 31136
// TypeInfo: 0x0000000144EC1AC0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class DynamicAOComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 DynamicAOFactor; // 0x90
        Float32 SsaoFade; // 0x94
        Float32 SsaoRadius; // 0x98
        Float32 SsaoMaxDistanceInner; // 0x9C
        Float32 SsaoMaxDistanceOuter; // 0xA0
        Float32 HbaoRadius; // 0xA4
        Float32 HbaoAngleBias; // 0xA8
        Float32 HbaoAttenuation; // 0xAC
        Float32 HbaoContrast; // 0xB0
        Float32 HbaoMaxFootprintRadius; // 0xB4
        Float32 HbaoPowerExponent; // 0xB8
        Float32 HbaoBlurRadius; // 0xBC
        Float32 HbaoBlurSharpness; // 0xC0
        Uint32 FieldFlagOverride0; // 0xC4
        Boolean Enable; // 0xC8
        Boolean AffectOutdoorLight; // 0xC9
        Boolean AffectLocalLight; // 0xCA
        Boolean TemporalFilterEnable; // 0xCB
        char pad_0xCC[0x4];
    }; // 0xD0
    static_assert(sizeof(DynamicAOComponentData) == 0xD0);
}
#pragma pack(pop)