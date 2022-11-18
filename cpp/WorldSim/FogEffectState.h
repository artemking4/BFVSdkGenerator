// Object: FogEffectState
// ClassId: 1641
// RuntimeId: 38783
// TypeInfo: 0x0000000144EC0EC0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldSim {
    class FogEffectState : public Core::DataContainer {
        Float32 Start; // 0x18
        Float32 End; // 0x1C
        Core::Vec4 Curve; // 0x20
        Core::Vec3 FogColor; // 0x30
        Core::Vec4 FogColorCurve; // 0x40
        Core::Vec3 ForwardLightScatteringColor; // 0x50
        Float32 FogColorStart; // 0x60
        Float32 FogColorEnd; // 0x64
        Float32 TransparencyFadeStart; // 0x68
        Float32 TransparencyFadeEnd; // 0x6C
        Float32 TransparencyFadeClamp; // 0x70
        Float32 ForwardLightScatteringPhaseG; // 0x74
        Float32 ForwardLightScatteringStrength; // 0x78
        Float32 ForwardLightScatteringPresence; // 0x7C
        Float32 ForwardLightScatteringMaxBlurLength; // 0x80
        Float32 ForwardLightScatteringExtinction; // 0x84
        Float32 ForwardLightScatteringSmoothness; // 0x88
        Float32 HeightFogFollowCamera; // 0x8C
        Float32 HeightFogAltitude; // 0x90
        Float32 HeightFogDepth; // 0x94
        Float32 HeightFogVisibilityRange; // 0x98
        Boolean Enable; // 0x9C
        Boolean ForwardLightScatteringEnabled; // 0x9D
        Boolean HeightFogEnable; // 0x9E
        char pad_0x9F[0x1];
    }; // 0xA0
    static_assert(sizeof(FogEffectState) == 0xA0);
}
#pragma pack(pop)