// Object: FogComponentData
// ClassId: 1889
// RuntimeId: 47864
// TypeInfo: 0x0000000144EC1E40
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class FogComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 Curve; // 0x90
        Core::Vec3 FogColor; // 0xA0
        Core::Vec4 FogColorCurve; // 0xB0
        Core::Vec4 TransparencyFadeCurve; // 0xC0
        Core::Vec3 ForwardLightScatteringColor; // 0xD0
        Float32 FogDistanceMultiplier; // 0xE0
        Float32 Start; // 0xE4
        Float32 End; // 0xE8
        Float32 FogColorStart; // 0xEC
        Float32 FogColorEnd; // 0xF0
        Float32 TransparencyFadeStart; // 0xF4
        Float32 TransparencyFadeEnd; // 0xF8
        Float32 TransparencyFadeClamp; // 0xFC
        Float32 ForwardLightScatteringRotationX; // 0x100
        Float32 ForwardLightScatteringRotationY; // 0x104
        Float32 ForwardLightScatteringPhaseG; // 0x108
        Float32 ForwardLightScatteringStrength; // 0x10C
        Float32 ForwardLightScatteringPresence; // 0x110
        Float32 ForwardLightScatteringMaxBlurLength; // 0x114
        Float32 ForwardLightScatteringExtinction; // 0x118
        Float32 ForwardLightScatteringSmoothness; // 0x11C
        Float32 HeightFogFollowCamera; // 0x120
        Float32 HeightFogAltitude; // 0x124
        Float32 HeightFogDepth; // 0x128
        Float32 HeightFogVisibilityRange; // 0x12C
        Float32 FogVolumeStrength; // 0x130
        Uint32 FieldFlagOverride0; // 0x134
        Boolean Enable; // 0x138
        Boolean FogGradientEnable; // 0x139
        Boolean FogColorEnable; // 0x13A
        Boolean ForwardLightScatteringEnabled; // 0x13B
        Boolean ForwardLightScatteringUseSunPosition; // 0x13C
        Boolean HeightFogEnable; // 0x13D
        char pad_0x13E[0x2];
    }; // 0x140
    static_assert(sizeof(FogComponentData) == 0x140);
}
#pragma pack(pop)