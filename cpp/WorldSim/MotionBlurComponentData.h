// Object: MotionBlurComponentData
// ClassId: 1895
// RuntimeId: 35940
// TypeInfo: 0x0000000144EC14C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class MotionBlurComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 MotionBlurScale; // 0x90
        Float32 DepthCheckMaxDistance; // 0x94
        Float32 MotionBlurCutoffRadius; // 0x98
        Float32 CutoffGradientScale; // 0x9C
        Core::Vec2 RadialBlurCenter; // 0xA0
        Float32 RadialBlurOffset; // 0xA8
        Float32 CircularOffsetFactor; // 0xAC
        Float32 RadialBlurScale; // 0xB0
        Uint16 FieldFlagOverride0; // 0xB4
        Boolean MotionBlurEnable; // 0xB6
        Boolean MotionBlurCentered; // 0xB7
        Boolean RadialBlurEnable; // 0xB8
        char pad_0xB9[0x7];
    }; // 0xC0
    static_assert(sizeof(MotionBlurComponentData) == 0xC0);
}
#pragma pack(pop)