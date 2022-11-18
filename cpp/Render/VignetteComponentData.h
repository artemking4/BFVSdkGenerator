// Object: VignetteComponentData
// ClassId: 1914
// RuntimeId: 24623
// TypeInfo: 0x0000000144F1C980
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace Render {
    class VignetteComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 Color; // 0x90
        Core::Vec2 Scale; // 0xA0
        Float32 Exponent; // 0xA8
        Float32 Opacity; // 0xAC
        Boolean Enable; // 0xB0
        Uint8 FieldFlagOverride0; // 0xB1
        char pad_0xB2[0xE];
    }; // 0xC0
    static_assert(sizeof(VignetteComponentData) == 0xC0);
}
#pragma pack(pop)