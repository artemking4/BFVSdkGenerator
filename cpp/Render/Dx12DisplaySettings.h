// Object: Dx12DisplaySettings
// ClassId: 4968
// RuntimeId: 36640
// TypeInfo: 0x0000000144F17CD0
#include "../Render/DxDisplaySettings.h"
#include "../Global/Boolean.h"
#include "../Render/StablePowerState.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class Dx12DisplaySettings : public Render::DxDisplaySettings {
        Render::StablePowerState StablePowerStateEnable; // 0x118
        Int32 ComputeQueueEnable; // 0x11C
        Int32 CopyQueueEnable; // 0x120
        Int32 MultiGPULimit; // 0x124
        Uint32 MaxMultisampleCount; // 0x128
        Int32 TriggerGpuHangFrame; // 0x12C
        Uint32 MemoryManagerAgeToEvictInFrames; // 0x130
        Uint32 MemoryManagerStatsStartX; // 0x134
        Uint32 MemoryManagerStatsStartY; // 0x138
        Uint32 MemoryManagerStatsStartStep; // 0x13C
        Uint32 Log2CbvSrvUavSlabBlockSizeMin; // 0x140
        Uint32 Log2SamplerSlabBlockSizeMin; // 0x144
        Uint32 Log2CbvSrvUavSlabBlockSizeMax; // 0x148
        Uint32 Log2SamplerSlabBlockSizeMax; // 0x14C
        Uint32 TransientResourceAllocatorSize; // 0x150
        Uint32 BreadcrumbManagerVerbosity; // 0x154
        Uint32 BreadcrumbManagerBufferSize; // 0x158
        Uint32 BreadcrumbManagerMarkerDepth; // 0x15C
        Uint32 BreadcrumbManagerPriorReportCount; // 0x160
        Uint32 BreadcrumbManagerPostReportCount; // 0x164
        Uint32 PlacedResourceMinAllocSizeMB; // 0x168
        Uint32 PlacedResourceDefaultHeapAlignmentMB; // 0x16C
        CString StaticPsoCacheSharedFolder; // 0x170
        Boolean DebugReportLeakSummaryEnable; // 0x178
        Boolean DebugReportLeakDetailsEnable; // 0x179
        Boolean CheckDeviceRemovedEnable; // 0x17A
        Boolean MemoryPoolsEnable; // 0x17B
        Boolean GpuProfilerEnable; // 0x17C
        Boolean DxrCommandAllocatorLeakWorkaround; // 0x17D
        Boolean DrawStats; // 0x17E
        Boolean DrawMemoryStats; // 0x17F
        Boolean DrawMemoryGraph; // 0x180
        Boolean DepthBoundsExtensionEnable; // 0x181
        Boolean EnableManualTransitions; // 0x182
        Boolean SubmitJobEnable; // 0x183
        Boolean PresentJoinJobsEnable; // 0x184
        Boolean ValidateStateCausesResourceTransition; // 0x185
        Boolean PixMarkersEnable; // 0x186
        Boolean OptimizedComputeSyncEnable; // 0x187
        Boolean Scorpio4kEnable; // 0x188
        Boolean MemoryManagerEnable; // 0x189
        Boolean MemoryManagerVerbose; // 0x18A
        Boolean UseReservedJobThreads; // 0x18B
        Boolean ClearUnusedDescriptorsToNull; // 0x18C
        Boolean BreadcrumbsEnable; // 0x18D
        Boolean BreadcrumbManagerVsEnable; // 0x18E
        Boolean BreadcrumbManagerReduceMarkerCount; // 0x18F
        Boolean BreadcrumbManagerBlockOnMarkers; // 0x190
        Boolean BreadcrumbManagerBlockOnEndMarker; // 0x191
        Boolean PreloadPsoEnable; // 0x192
        Boolean PreloadPsoOnlyUsed; // 0x193
        Boolean PlacedResourceUsePow2Alignment; // 0x194
        Boolean PlacedResourcesTrimCoresOnGC; // 0x195
        Boolean StaticPsoCacheSharedFolderEnable; // 0x196
        char pad_0x197[0x1];
    }; // 0x198
    static_assert(sizeof(Dx12DisplaySettings) == 0x198);
}
#pragma pack(pop)