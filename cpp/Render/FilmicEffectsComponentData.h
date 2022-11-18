// Object: FilmicEffectsComponentData
// ClassId: 1888
// RuntimeId: 26166
// TypeInfo: 0x0000000144F1C780
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace Render {
    class FilmicEffectsComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 DepthFlashAtmosColor; // 0x90
        Float32 ChromaticAbberationScale; // 0xA0
        Float32 ChromaticAbberationAspectRatio; // 0xA4
        Float32 VignettingFalloff; // 0xA8
        Float32 VignettingLuminancePercent; // 0xAC
        Float32 LensDistortionGain; // 0xB0
        Float32 LensDistortionCubicGain; // 0xB4
        Float32 LensDistortionStretch; // 0xB8
        Float32 FrameFlashGain; // 0xBC
        Float32 DepthFlashHalfDistance; // 0xC0
        Float32 DistanceBlurGain; // 0xC4
        Float32 DistanceBlurHalfDistance; // 0xC8
        Float32 EdgeBlurGain; // 0xCC
        Float32 EdgeBlurDepthTargetScale; // 0xD0
        Float32 EdgeBlurFadeNearDepth; // 0xD4
        Float32 EdgeBlurFadeFarDepth; // 0xD8
        Float32 EdgeBlurMatteDilateSize; // 0xDC
        Float32 EdgeBlurMatteBlurKernelSize; // 0xE0
        Float32 HeatRippleGain; // 0xE4
        Float32 HeatRippleHorizontalSpeed; // 0xE8
        Float32 HeatRippleVerticalSpeed; // 0xEC
        Float32 HeatRippleNoiseScale; // 0xF0
        Float32 HeatRippleNearDistance; // 0xF4
        Float32 HeatRippleFarDistance; // 0xF8
        Float32 HeatRippleNearGain; // 0xFC
        Float32 HeatRippleFarGain; // 0x100
        char pad_0x104[0x4];
        RenderBase::TextureBaseAsset HeatRippleTexture; // 0x108
        Uint32 FieldFlagOverride0; // 0x110
        Boolean Enable; // 0x114
        Boolean EnableChromaticAbberation; // 0x115
        Boolean EnableVignetting; // 0x116
        Boolean EnableLensDistortion; // 0x117
        Boolean EnableFrameFlash; // 0x118
        Boolean EnableDepthFlash; // 0x119
        Boolean EnableDistanceBlur; // 0x11A
        Boolean EnableEdgeBlur; // 0x11B
        Boolean EnableHeatRipple; // 0x11C
        Uint8 FieldFlagOverride1; // 0x11D
        char pad_0x11E[0x2];
    }; // 0x120
    static_assert(sizeof(FilmicEffectsComponentData) == 0x120);
}
#pragma pack(pop)