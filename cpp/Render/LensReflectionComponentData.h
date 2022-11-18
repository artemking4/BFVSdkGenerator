// Object: LensReflectionComponentData
// ClassId: 1891
// RuntimeId: 60901
// TypeInfo: 0x0000000144F1C700
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace Render {
    class LensReflectionComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 InnerColor; // 0x90
        Core::Vec3 OuterColor; // 0xA0
        Float32 MixStart; // 0xB0
        Float32 MixStop; // 0xB4
        Float32 InputExponent; // 0xB8
        Float32 InputScale; // 0xBC
        Float32 MaxOpacity; // 0xC0
        Float32 Scale; // 0xC4
        Float32 DistortionFactor; // 0xC8
        Float32 VerticalStretch; // 0xCC
        Uint16 FieldFlagOverride0; // 0xD0
        Boolean Enable; // 0xD2
        Boolean TransposeReflection; // 0xD3
        char pad_0xD4[0xC];
    }; // 0xE0
    static_assert(sizeof(LensReflectionComponentData) == 0xE0);
}
#pragma pack(pop)