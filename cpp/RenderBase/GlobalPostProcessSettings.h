// Object: GlobalPostProcessSettings
// ClassId: 4091
// RuntimeId: 5186
// TypeInfo: 0x0000000144F24010
#include "../Core/DataContainer.h"
#include "../RenderBase/PostProcessDebugMode.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../RenderBase/AutoExposureMethod.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Core/Vec4.h"
#include "../RenderBase/ColorGradingQualityMode.h"
#include "../RenderBase/BlurMethod.h"
#include "../RenderBase/DynamicAOMethod.h"
#include "../RenderBase/ScreenSpaceRaytraceAsyncComputeMethod.h"
#include "../RenderBase/BlurFilter.h"

#pragma pack(push, 16)
namespace RenderBase {
    class GlobalPostProcessSettings : public Core::DataContainer {
        RenderBase::PostProcessDebugMode DebugMode; // 0x18
        Uint32 DebugModeStep; // 0x1C
        Core::Vec3 ForceBloomScale; // 0x20
        Core::Vec4 ForceVignetteColor; // 0x30
        Core::Vec3 FilmGrainColorScale; // 0x40
        Core::Vec3 Brightness; // 0x50
        Core::Vec3 Contrast; // 0x60
        Core::Vec3 Saturation; // 0x70
        Float32 ForceEVCompensation; // 0x80
        Float32 ForceEV; // 0x84
        Int32 BloomFFTMipLevel; // 0x88
        Int32 BloomFFTProceduralKernelSize; // 0x8C
        Uint32 BlurPyramidFinalLevel; // 0x90
        Float32 BlurPyramidLdrRange; // 0x94
        Float32 DebugColorGraphMinValue; // 0x98
        Float32 DebugColorGraphMaxValue; // 0x9C
        Int32 DebugColorGraphLineNumber; // 0xA0
        RenderBase::AutoExposureMethod AutoExposureMethod; // 0xA4
        Uint32 AutoExposureHistogramBinCount; // 0xA8
        Uint32 AutoExposureHistogramMipUsed; // 0xAC
        Float32 AutoExposureHistogramMinValue; // 0xB0
        Float32 AutoExposureHistogramMaxValue; // 0xB4
        Uint32 DownsampleAverageStartMipmap; // 0xB8
        Int32 ForceDofEnable; // 0xBC
        Float32 ForceDofBlurFactor; // 0xC0
        Float32 ForceDofBlurAdd; // 0xC4
        Float32 ForceDofFocusDistance; // 0xC8
        Float32 ForceSimpleDofNearStart; // 0xCC
        Float32 ForceSimpleDofNearEnd; // 0xD0
        Float32 ForceSimpleDofFarStart; // 0xD4
        Float32 ForceSimpleDofFarEnd; // 0xD8
        Float32 ForceSimpleDofBlurMax; // 0xDC
        Float32 ForceSpriteDofNearStart; // 0xE0
        Float32 ForceSpriteDofNearEnd; // 0xE4
        Float32 ForceSpriteDofFarStart; // 0xE8
        Float32 ForceSpriteDofFarEnd; // 0xEC
        Float32 ForceSpriteDofBlurMax; // 0xF0
        Core::Vec2 ForceVignetteScale; // 0xF4
        Float32 ForceVignetteExponent; // 0xFC
        Float32 FxaaComputeSubPixelRemoval; // 0x100
        Float32 FxaaComputeContrastThreshold; // 0x104
        Int32 ForceTonemapMethod; // 0x108
        RenderBase::ColorGradingQualityMode ColorGradingHighQualityMode; // 0x10C
        Int32 ForceChromostereopsisEnable; // 0x110
        Int32 ForceChromostereopsisOffset; // 0x114
        Float32 ForceChromostereopsisScale; // 0x118
        Core::Vec2 FilmGrainTextureScale; // 0x11C
        Float32 LensScopeColorScale; // 0x124
        Float32 HalfResEdgeDetectThreshold; // 0x128
        Float32 Hue; // 0x12C
        Float32 UIBrightnessNorm; // 0x130
        Float32 UserBrightnessMin; // 0x134
        Float32 UserBrightnessMax; // 0x138
        Float32 UserBrightnessAddScale; // 0x13C
        Float32 UserBrightnessMulScale; // 0x140
        Float32 LUTGammaR; // 0x144
        Float32 LUTGammaG; // 0x148
        Float32 LUTGammaB; // 0x14C
        Float32 LUTGammaCurbOffset; // 0x150
        RenderBase::BlurMethod BlurMethod; // 0x154
        Float32 FocusDofMaxBlur; // 0x158
        Float32 SpriteDofMinRadiusLayer1; // 0x15C
        Float32 SpriteDofMinRadiusLayer2; // 0x160
        Float32 SpriteDofMaxRadiusGatherPass; // 0x164
        Float32 SpriteDofMergeColorThreshold; // 0x168
        Float32 SpriteDofMergeRadiusThreshold; // 0x16C
        Float32 SpriteDofDepthDiscontinuityThreshold; // 0x170
        Uint32 SpriteDofActiveLayer; // 0x174
        Float32 SpriteDofInfocusMultiplier; // 0x178
        Float32 SpriteDofEnergyScaler; // 0x17C
        Uint32 SpriteDofMultilayerForegroundCount; // 0x180
        Float32 SpriteDofMultilayerForegroundCocSpan; // 0x184
        Float32 SpriteDofForegroundReweightExponent; // 0x188
        Float32 SpriteDofMultilayerForegroundLayerExtension; // 0x18C
        Uint32 SpriteDofMultilayerForegroundActiveLayer; // 0x190
        RenderBase::DynamicAOMethod DynamicAOMethod; // 0x194
        Int32 ScreenSpaceRaytraceFriendlyLevel; // 0x198
        RenderBase::ScreenSpaceRaytraceAsyncComputeMethod ScreenSpaceRaytraceAsyncComputeMethod; // 0x19C
        Float32 ScreenSpaceRaytraceThicknessFadeScale; // 0x1A0
        Float32 ScreenSpaceRaytraceReuseAllocWhitePoint; // 0x1A4
        Int32 ScreenSpaceRaytraceDebug; // 0x1A8
        Int32 ScreenSpaceRaytraceQuality; // 0x1AC
        Uint32 IronsightsDofResolutionFactor; // 0x1B0
        RenderBase::BlurFilter IronsightsBlurFilter; // 0x1B4
        RenderBase::BlurFilter IronsightsBlurFilter720p; // 0x1B8
        Float32 IronsightsHDRCompression; // 0x1BC
        Float32 IronsightsCoCScale; // 0x1C0
        Float32 OverrideIronsightsHipFade; // 0x1C4
        Float32 OverrideIronsightsStartFade; // 0x1C8
        Float32 OverrideIronsightsFocalDistance; // 0x1CC
        Float32 OverrideIronsightsDofCircleDistance; // 0x1D0
        Float32 SetAlphaFromDepthBufferThreshold; // 0x1D4
        Uint32 DynamicAOSampleTemporalCount; // 0x1D8
        Uint32 DynamicAOSampleStepCount; // 0x1DC
        Uint32 DynamicAOSampleDirCount; // 0x1E0
        Float32 DynamicAOMaxFootprintRadius; // 0x1E4
        Uint32 DynamicAOBilateralBlurRadius; // 0x1E8
        Float32 DynamicAOBilateralBlurSharpness; // 0x1EC
        Float32 DynamicAONormalInfluence; // 0x1F0
        Float32 DynamicAOScale; // 0x1F4
        Float32 DynamicAOTemporalDisocclusionRejectionFactor; // 0x1F8
        Float32 DynamicAOTemporalMotionSharpeningFactor; // 0x1FC
        Float32 DynamicAOTemporalResponsiveness; // 0x200
        Float32 DynamicAOTemporalAntiflickerStrength; // 0x204
        Uint32 DrawDebugDynamicAOTemporalAccumulationCount; // 0x208
        Uint32 DrawDebugDynamicAOTemporalDebugMode; // 0x20C
        Float32 DrawDebugDynamicAOTemporalMaxDistance; // 0x210
        Boolean HdrBlurEnable; // 0x214
        Boolean EVClampEnable; // 0x215
        Boolean AdaptationTimeEnable; // 0x216
        Boolean ForceEVCompensationEnable; // 0x217
        Boolean ForceEVEnable; // 0x218
        Boolean DrawDebugInfo; // 0x219
        Boolean DrawExposureDebugInfo; // 0x21A
        Boolean RenderTargetLoadOptsEnable; // 0x21B
        Boolean SinglePassSupported; // 0x21C
        Boolean BlurEnable; // 0x21D
        Boolean QuarterDownsamplingEnable; // 0x21E
        Boolean BlurBlendEnable; // 0x21F
        Boolean BloomEnable; // 0x220
        Boolean BloomTestEnable; // 0x221
        Boolean BloomFFTEnable; // 0x222
        Boolean DrawDebugFFTEnable; // 0x223
        Boolean BlurPyramidEnable; // 0x224
        Boolean BlurPyramidQuarterResEnable; // 0x225
        Boolean BlurPyramidHdrEnable; // 0x226
        Boolean BlurPyramidFastHdrEnable; // 0x227
        Boolean BlurPyramidSinglePassEnable; // 0x228
        Boolean DebugColorGraphEnable; // 0x229
        Boolean DownsampleLogAverageEnable; // 0x22A
        Boolean DownsampleBeforeBlurEnable; // 0x22B
        Boolean VignetteEnable; // 0x22C
        Boolean FxaaComputeDebug; // 0x22D
        Boolean DrawDebugParametricTonemap; // 0x22E
        Boolean ColorGradingEnable; // 0x22F
        Boolean ColorGradingComputeEnable; // 0x230
        Boolean ColorGradingDebugEnable; // 0x231
        Boolean ColorTransformEnable; // 0x232
        Boolean ColorGradingForceUpdateAlways; // 0x233
        Boolean FilmGrainEnable; // 0x234
        Boolean FilmGrainLinearFilteringEnable; // 0x235
        Boolean FilmGrainRandomEnable; // 0x236
        Boolean ForceDisableFilmicChromaticAberration; // 0x237
        Boolean ForceDisableLensDistortion; // 0x238
        Boolean LensScopeEnable; // 0x239
        Boolean UserBrightnessLUTEnable; // 0x23A
        Boolean DrawDebugUserBrightnessLUT; // 0x23B
        Boolean SpriteDofMergeEnable; // 0x23C
        Boolean SpriteDofForegroundEnable; // 0x23D
        Boolean SpriteDofDepthFilterEnable; // 0x23E
        Boolean SpriteDofBuffer32bitEnable; // 0x23F
        Boolean SpriteDofHalfResolutionEnable; // 0x240
        Boolean SpriteDofInstancingEnable; // 0x241
        Boolean SpriteDofNearGatherEnable; // 0x242
        Boolean SpriteDofMultilayerForegroundEnable; // 0x243
        Boolean SpriteDofDebugEnable; // 0x244
        Boolean SpriteDofOpticalVignettingEnable; // 0x245
        Boolean CircularDofEnableHighRes; // 0x246
        Boolean CircularDofEnableFarBlurHighQuality; // 0x247
        Boolean CircularDofEnableAntiBanding; // 0x248
        Boolean DynamicAOEnable; // 0x249
        Boolean SsaoBlurEnable; // 0x24A
        Boolean ScreenSpaceRaytraceEnable; // 0x24B
        Boolean ScreenSpaceRaytraceDeferredResolveEnable; // 0x24C
        Boolean ScreenSpaceRaytraceSeparateCoverageEnable; // 0x24D
        Boolean ScreenSpaceRaytraceFullresEnable; // 0x24E
        Boolean ScreenSpaceRaytrace32BitEnable; // 0x24F
        Boolean ScreenSpaceRaytraceReuseAllocEnable; // 0x250
        Boolean IronsightsDofEnable; // 0x251
        Boolean ForceIronsightsDofActive; // 0x252
        Boolean IronsightHDR; // 0x253
        Boolean OverrideIronsightsDofParams; // 0x254
        Boolean OverrideIronsightsDofCircleBlur; // 0x255
        Boolean ForceLensScopeActive; // 0x256
        Boolean DynamicAOHorizonBased; // 0x257
        Boolean DynamicAOBilateralBlurEnable; // 0x258
        Boolean DynamicAONormalEnable; // 0x259
        Boolean DynamicAOUseAsyncCompute; // 0x25A
        Boolean DynamicAOAutoScale; // 0x25B
        Boolean DynamicAOTemporalFilterEnable; // 0x25C
        Boolean DynamicAO32BitEnable; // 0x25D
        Boolean DynamicAOTemporalHistorySharpening; // 0x25E
        Boolean DrawDebugDynamicAOTemporalEnable; // 0x25F
        Boolean ParticleShadowsHwClear; // 0x260
        Boolean ParticleShadowsAccumGFX; // 0x261
        char pad_0x262[0xE];
    }; // 0x270
    static_assert(sizeof(GlobalPostProcessSettings) == 0x270);
}
#pragma pack(pop)