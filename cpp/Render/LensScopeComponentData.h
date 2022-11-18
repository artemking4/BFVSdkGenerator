// Object: LensScopeComponentData
// ClassId: 1892
// RuntimeId: 5736
// TypeInfo: 0x0000000144F1C880
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace Render {
    class LensScopeComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 ChromaticAberrationColor1; // 0x90
        Core::Vec3 ChromaticAberrationColor2; // 0xA0
        Float32 BlurScale; // 0xB0
        Core::Vec2 BlurCenter; // 0xB4
        Core::Vec2 ChromaticAberrationStrengths; // 0xBC
        Core::Vec2 ChromaticAberrationDisplacement1; // 0xC4
        Core::Vec2 ChromaticAberrationDisplacement2; // 0xCC
        Core::Vec2 RadialBlendDistanceCoefficients; // 0xD4
        Uint16 FieldFlagOverride0; // 0xDC
        Boolean Enable; // 0xDE
        char pad_0xDF[0x1];
    }; // 0xE0
    static_assert(sizeof(LensScopeComponentData) == 0xE0);
}
#pragma pack(pop)