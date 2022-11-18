// Object: GameRenderSettings
// ClassId: 4085
// RuntimeId: 2261
// TypeInfo: 0x0000000144F1D580
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Render/ScaleResampleMode.h"
#include "../Render/DisplayMappingShoulderType.h"

#pragma pack(push, 8)
namespace Render {
    class GameRenderSettings : public Core::DataContainer {
        Uint32 InactiveSkipFrameCount; // 0x18
        Float32 ResolutionScale; // 0x1C
        Float32 FrameSynthesisScaleH; // 0x20
        Float32 FrameSynthesisScaleV; // 0x24
        Float32 ResolutionScaleDynamicGraphMax; // 0x28
        Int32 MantleEnable; // 0x2C
        Int32 DxrEnable; // 0x30
        Float32 DLISPSharpness; // 0x34
        Float32 DLAAMotionVectorScaleX; // 0x38
        Float32 DLAAMotionVectorScaleY; // 0x3C
        Float32 NearPlane; // 0x40
        Float32 ViewDistance; // 0x44
        Float32 ForceFov; // 0x48
        Float32 FovMultiplier; // 0x4C
        Float32 ForceOrthoViewSize; // 0x50
        Float32 EdgeModelScreenAreaScale; // 0x54
        Float32 EdgeModelViewDistance; // 0x58
        Int32 EdgeModelForceLod; // 0x5C
        Float32 EdgeModelLodScale; // 0x60
        Float32 SoldierLowLodMeshDistance; // 0x64
        Float32 StaticModelPartOcclusionMaxScreenArea; // 0x68
        Uint32 StaticModelCullJobCount; // 0x6C
        Uint32 SplitScreenTestViewCount; // 0x70
        Uint32 SplitScreenTestCase; // 0x74
        Float32 ForceBlurAmount; // 0x78
        Float32 ForceWorldFadeAmount; // 0x7C
        Float32 RenderPlaneOverlayResolutionScale; // 0x80
        Render::ScaleResampleMode RenderScaleResampleMode; // 0x84
        Float32 StereoCrosshairMaxHitDepth; // 0x88
        Float32 StereoCrosshairRadius; // 0x8C
        Float32 StereoCrosshairDampingFactor; // 0x90
        Uint32 UIBlurKernelRadius; // 0x94
        Float32 DisplayMappingSdrPeakLuma; // 0x98
        Float32 DisplayMappingHdr10PeakLuma; // 0x9C
        Render::DisplayMappingShoulderType DisplayMappingShoulderType; // 0xA0
        Float32 HdrLiveGradingOverlayOpacity; // 0xA4
        Float32 DolbyVisionMetadataL1MinLuminanceOverride; // 0xA8
        Float32 DolbyVisionMetadataL1MaxLuminanceOverride; // 0xAC
        Float32 DolbyVisionMetadataL2MinLuminanceOverride; // 0xB0
        Float32 DolbyVisionMetadataL2MaxLuminanceOverride; // 0xB4
        Float32 DolbyVisionMetadataL2AvgLuminanceOverride; // 0xB8
        Float32 OverlayDropShadowAmount; // 0xBC
        Boolean Enable; // 0xC0
        Boolean NullRendererEnable; // 0xC1
        Boolean JobEnable; // 0xC2
        Boolean BuildJobSyncEnable; // 0xC3
        Boolean DrawDebugDynamicTextureArrays; // 0xC4
        Boolean DrawDebugInfo; // 0xC5
        Boolean DrawScreenInfo; // 0xC6
        Boolean ResolutionScaleDynamicDrawDebug; // 0xC7
        Boolean ClampGpuMemory; // 0xC8
        Boolean Fullscreen; // 0xC9
        Boolean ForceVSyncEnable; // 0xCA
        Boolean MovieVSyncEnable; // 0xCB
        Boolean VSyncFlashTestEnable; // 0xCC
        Boolean OutputBrightnessTestEnable; // 0xCD
        Boolean GlEnable; // 0xCE
        Boolean Dx11Enable; // 0xCF
        Boolean Dx12Enable; // 0xD0
        Boolean Dx12ForceEnable; // 0xD1
        Boolean Dx12GameViewEnable; // 0xD2
        Boolean Dx12LiveEditEnable; // 0xD3
        Boolean DxrNullEnable; // 0xD4
        Boolean DLISPEnable; // 0xD5
        Boolean DLAAEnable; // 0xD6
        Boolean UseResolutionScaleFromNGX; // 0xD7
        Boolean DLSSDebugDrawEnable; // 0xD8
        Boolean DLAACaptureEnable; // 0xD9
        Boolean DLISPOverrideSharpnessPerResolution; // 0xDA
        Boolean DLAAReset; // 0xDB
        Boolean DLAAEvaluateFeature; // 0xDC
        Boolean DLISPEvaluateFeature; // 0xDD
        Boolean BalsaEnable; // 0xDE
        Boolean Gen4aEsramEnable; // 0xDF
        Boolean Gen4bColorRemap; // 0xE0
        Boolean GpuTextureCompressorEnable; // 0xE1
        Boolean MeshWorldEnable; // 0xE2
        Boolean EmittersEnable; // 0xE3
        Boolean EntityRenderEnable; // 0xE4
        Boolean DebugRendererEnable; // 0xE5
        Boolean DebugRenderServiceEnable; // 0xE6
        Boolean DebugRendererDepthTestEnable; // 0xE7
        Boolean InitialClearEnable; // 0xE8
        Boolean GpuProfilerEnable; // 0xE9
        Boolean ForceOrthoViewEnable; // 0xEA
        Boolean ForceSquareOrthoView; // 0xEB
        Boolean DestructionVolumeDrawEnable; // 0xEC
        Boolean EdgeModelsEnable; // 0xED
        Boolean EdgeModelCastShadowsEnable; // 0xEE
        Boolean EdgeModelDepthBiasEnable; // 0xEF
        Boolean EdgeModelShadowDepthBiasEnable; // 0xF0
        Boolean EdgeModelUseMainLodEnable; // 0xF1
        Boolean EdgeModelUseLodBox; // 0xF2
        Boolean EdgeModelCullEnable; // 0xF3
        Boolean EdgeModelFrustumCullEnable; // 0xF4
        Boolean EdgeModelDrawBoxes; // 0xF5
        Boolean EdgeModelDrawStats; // 0xF6
        Boolean StaticModelEnable; // 0xF7
        Boolean StaticModelMeshesEnable; // 0xF8
        Boolean StaticModelZPassEnable; // 0xF9
        Boolean StaticModelPartCullEnable; // 0xFA
        Boolean StaticModelPartFrustumCullEnable; // 0xFB
        Boolean StaticModelPartOcclusionCullEnable; // 0xFC
        Boolean StaticModelPartShadowCullEnable; // 0xFD
        Boolean StaticModelDrawBoxes; // 0xFE
        Boolean StaticModelDrawStats; // 0xFF
        Boolean StaticModelCullSpuJobEnable; // 0x100
        Boolean StaticModelSurfaceShaderTerrainAccessEnable; // 0x101
        Boolean LockView; // 0x102
        Boolean ResetLockedView; // 0x103
        Boolean InfiniteProjectionMatrixEnable; // 0x104
        Boolean SecondaryStreamingViewEnable; // 0x105
        Boolean FadeEnable; // 0x106
        Boolean FadeWaitingEnable; // 0x107
        Boolean FadeInverted; // 0x108
        Boolean RenderPlanesEnable; // 0x109
        Boolean RenderPlaneMainEnable; // 0x10A
        Boolean RenderPlaneOverlayEnable; // 0x10B
        Boolean RenderPlanesAutoDisable; // 0x10C
        Boolean RenderScaleResampleEnable; // 0x10D
        Boolean BlurEnable; // 0x10E
        Boolean UIBlurEnable; // 0x10F
        Boolean UIBlurDownsampleBoxBlur; // 0x110
        Boolean HdrGradingEnable; // 0x111
        Boolean DisplayMappingEnable; // 0x112
        Boolean HdrOutputPreferCs; // 0x113
        Boolean DrawHdrCalibrationScreen; // 0x114
        Boolean DolbyVisionMetadataOverrideAllEnable; // 0x115
        Boolean DolbyVisionMetadataL1MinLuminanceOverrideEnable; // 0x116
        Boolean DolbyVisionMetadataL1MaxLuminanceOverrideEnable; // 0x117
        Boolean DolbyVisionMetadataL2MinLuminanceOverrideEnable; // 0x118
        Boolean DolbyVisionMetadataL2MaxLuminanceOverrideEnable; // 0x119
        Boolean DolbyVisionMetadataL2AvgLuminanceOverrideEnable; // 0x11A
        Boolean DolbyVisionMetadataLuminanceDisplayEnable; // 0x11B
        Boolean DolbyVisionMetadataDebugOverlayEnable; // 0x11C
        Boolean AmdWorkaroundForDolbyVision; // 0x11D
        Boolean Dx12DrawPsoCacheStats; // 0x11E
        Boolean OverlayTextureCmaskEnable; // 0x11F
        Boolean OverlayPostProcessingEnable; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(GameRenderSettings) == 0x128);
}
#pragma pack(pop)