// Object: ShadowsComponentData
// ClassId: 1906
// RuntimeId: 61739
// TypeInfo: 0x0000000144EC1740
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Core/QualityScalableFloat.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class ShadowsComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 DefSunShadowmapViewDistance; // 0x90
        Core::QualityScalableFloat SunShadowmapViewDistance; // 0x94
        Float32 SunShadowmapExtrusionLength; // 0xA8
        Float32 SunShadowmapSliceSchemeWeight; // 0xAC
        Uint8 FieldFlagOverride0; // 0xB0
        char pad_0xB1[0xF];
    }; // 0xC0
    static_assert(sizeof(ShadowsComponentData) == 0xC0);
}
#pragma pack(pop)