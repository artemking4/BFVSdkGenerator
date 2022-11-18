// Object: BaseDisplaySettings
// ClassId: 4965
// RuntimeId: 35396
// TypeInfo: 0x0000000144F17C50
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Render/DisplayDynamicRange.h"

#pragma pack(push, 8)
namespace Render {
    class BaseDisplaySettings : public Core::SystemSettings {
        Uint32 PreferredAdapterVendor; // 0x20
        Uint32 FullscreenHeight; // 0x24
        Uint32 FullscreenWidth; // 0x28
        Float32 FullscreenRefreshRate; // 0x2C
        Int32 FullscreenOutputIndex; // 0x30
        Int32 PresentInterval; // 0x34
        Uint32 PresentImmediateThreshold; // 0x38
        Int32 RenderAheadLimit; // 0x3C
        Float32 GpuTimeoutTime; // 0x40
        Float32 LatencyLimitMs; // 0x44
        Float32 RecoveryTimeMaxMs; // 0x48
        Float32 RecoveryTimeRampMs; // 0x4C
        Uint32 FrameResourceSegmentSize; // 0x50
        Uint32 FrameResourceNonSegmentSize; // 0x54
        Uint32 FrameResourceFreeFrameCount; // 0x58
        Float32 FrameResourceFreeFactor; // 0x5C
        Float32 FrameResourceFreeUsedSizeFactor; // 0x60
        Float32 StereoDepth; // 0x64
        Float32 StereoConvergenceScale; // 0x68
        Float32 StereoSeparationScale; // 0x6C
        Float32 StereoSoldierZoomConvergenceScale; // 0x70
        Render::DisplayDynamicRange DisplayDynamicRange; // 0x74
        Uint32 RenderTargetPoolBytes; // 0x78
        Uint32 RenderTargetPoolDebugX; // 0x7C
        Uint32 RenderTargetPoolDebugY; // 0x80
        Float32 DepthBufferPoolEsramBudget; // 0x84
        Float32 GBufferPoolEsramBudget; // 0x88
        Float32 RenderTargetPoolEsramBudget; // 0x8C
        Uint32 RenderTargetPoolGen4aVirtualBytes; // 0x90
        Uint32 RenderTargetPoolGen4MaxResourceAlignment; // 0x94
        Float32 HDRTargetEsramBudget; // 0x98
        Float32 PostRenderTargetPoolEsramBudget; // 0x9C
        Float32 HalfResRenderTargetPoolEsramBudget; // 0xA0
        Float32 ShadowSlicePoolEsramBudget; // 0xA4
        Float32 HBAOPoolEsramBudget; // 0xA8
        Boolean NullDriverEnable; // 0xAC
        Boolean CreateMinimalWindow; // 0xAD
        Boolean FullscreenModeEnable; // 0xAE
        Boolean Fullscreen; // 0xAF
        Boolean PresentEnable; // 0xB0
        Boolean WindowBordersEnable; // 0xB1
        Boolean HdrDisplayEnabled; // 0xB2
        Boolean HdrAllowHdr10; // 0xB3
        Boolean HdrAllowDolbyVision; // 0xB4
        Boolean VSyncEnable; // 0xB5
        Boolean TripleBufferingEnable; // 0xB6
        Boolean AutomaticComputeSyncEnable; // 0xB7
        Boolean LockRenderDispatchToPresent; // 0xB8
        Boolean FrameResourceFreeEnable; // 0xB9
        Boolean StereoEnable; // 0xBA
        Boolean StereoSplitScreenEnable; // 0xBB
        Boolean StereoVrEnable; // 0xBC
        Boolean Framebuffer10BitEnable; // 0xBD
        Boolean RenderTargetPoolEnable; // 0xBE
        Boolean RenderTargetPoolDebug; // 0xBF
        Boolean CpuHeapStompEnable; // 0xC0
        char pad_0xC1[0x7];
    }; // 0xC8
    static_assert(sizeof(BaseDisplaySettings) == 0xC8);
}
#pragma pack(pop)