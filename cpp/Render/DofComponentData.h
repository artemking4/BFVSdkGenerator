// Object: DofComponentData
// ClassId: 1881
// RuntimeId: 59657
// TypeInfo: 0x0000000144F1CA00
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Render/DofSource.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../RenderBase/BlurFilter.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Render/VignettingOperation.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Render {
    class DofComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 BokehChromaticAberrationFgColor; // 0x90
        Core::Vec3 BokehChromaticAberrationBgColor; // 0xA0
        Render::DofSource DofSource; // 0xB0
        Float32 FocusDofMaxBlur; // 0xB4
        Float32 BlurFactor; // 0xB8
        Float32 BlurAdd; // 0xBC
        Float32 FocusDistance; // 0xC0
        Float32 RadialBlurAmountCommonDof; // 0xC4
        Float32 RadialBlurStartRadiusCommonDof; // 0xC8
        Float32 RadialBlurTransitionWidthCommonDof; // 0xCC
        Float32 RadialBlurTiltCommonDof; // 0xD0
        Float32 RadialBlurHorizontalScaleCommonDof; // 0xD4
        Float32 RadialBlurAspectRatioBlend; // 0xD8
        Core::Vec2 RadialBlurPositionCommonDof; // 0xDC
        RenderBase::BlurFilter SimpleDofBlurFilter; // 0xE4
        Float32 SimpleDofStandardDeviation; // 0xE8
        char pad_0xEC[0x4];
        RenderBase::TextureBaseAsset SpriteDofBokehTexture; // 0xF0
        Float32 FocusDofNearStart; // 0xF8
        Float32 FocusDofNearEnd; // 0xFC
        Float32 FocusDofFarStart; // 0x100
        Float32 FocusDofFarEnd; // 0x104
        Float32 PbrFocusLengthDof; // 0x108
        Float32 PbrFilmWidthDof; // 0x10C
        Float32 PbrFStopDof; // 0x110
        Float32 OpticalVignettingAmount; // 0x114
        Float32 OpticalVignettingAspectRatio; // 0x118
        Float32 OpticalVignettingAnamorphicSqueeze; // 0x11C
        Float32 OpticalVignettingSizeCompensation; // 0x120
        Render::VignettingOperation OpticalVignettingOperation; // 0x124
        Float32 BokehChromaticAberrationScale; // 0x128
        Float32 BokehChromaticAberrationRadius; // 0x12C
        Float32 BokehChromaticAberrationWidth; // 0x130
        Float32 BokehChromaticAberrationRadiusThreshold; // 0x134
        Float32 BokehChromaticAberrationRadiusThresholdWidth; // 0x138
        Float32 BokehChromaticAberrationEnergyThreshold; // 0x13C
        Float32 HipToIronsightsFade; // 0x140
        Float32 IronsightsDofStartFade; // 0x144
        Float32 IronsightsFocalDistance; // 0x148
        Float32 MaskedBlurAmount; // 0x14C
        RenderBase::TextureBaseAsset MaskedBlurTexture; // 0x150
        Float32 SimpleDofMaxBlur; // 0x158
        Float32 SimpleDofNearStart; // 0x15C
        Float32 SimpleDofNearEnd; // 0x160
        Float32 SimpleDofFarStart; // 0x164
        Float32 SimpleDofFarEnd; // 0x168
        Float32 SpriteDofNearStart; // 0x16C
        Float32 SpriteDofNearEnd; // 0x170
        Float32 SpriteDofFarStart; // 0x174
        Float32 SpriteDofFarEnd; // 0x178
        Float32 SpriteDofMaxBlur; // 0x17C
        Float32 IronsightsDofCircleDistance; // 0x180
        Float32 FullScreenBlurAddCommonDof; // 0x184
        Uint32 FieldFlagOverride0; // 0x188
        Uint32 FieldFlagOverride1; // 0x18C
        Boolean Enable; // 0x190
        Boolean DebugDrawFocusPlane; // 0x191
        Boolean RadialBlurEnableCommonDof; // 0x192
        Boolean OpticalVignettingEnable; // 0x193
        Boolean RGBBokehTextureEnable; // 0x194
        Boolean BokehChromaticAberrationEnable; // 0x195
        Boolean IronsightsDofActive; // 0x196
        Boolean IronsightsDofExtraBlur; // 0x197
        Boolean MaskedBlurEnabled; // 0x198
        Boolean CircularDofAntiBandArtifact; // 0x199
        Boolean UseCameraSettings; // 0x19A
        Boolean IronsightsDofCircleBlur; // 0x19B
        char pad_0x19C[0x4];
    }; // 0x1A0
    static_assert(sizeof(DofComponentData) == 0x1A0);
}
#pragma pack(pop)