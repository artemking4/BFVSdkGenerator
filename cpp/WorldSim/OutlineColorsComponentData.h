// Object: OutlineColorsComponentData
// ClassId: 1897
// RuntimeId: 17861
// TypeInfo: 0x0000000144EC0FC0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OutlineColorsComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 Color1; // 0x90
        Core::Vec3 Color2; // 0xA0
        Core::Vec3 Color3; // 0xB0
        Core::Vec3 Color4; // 0xC0
        Float32 Brightness; // 0xD0
        Float32 Color1Alpha; // 0xD4
        Float32 Color2Alpha; // 0xD8
        Float32 Color3Alpha; // 0xDC
        Float32 Color4Alpha; // 0xE0
        Uint16 FieldFlagOverride0; // 0xE4
        char pad_0xE6[0xA];
    }; // 0xF0
    static_assert(sizeof(OutlineColorsComponentData) == 0xF0);
}
#pragma pack(pop)