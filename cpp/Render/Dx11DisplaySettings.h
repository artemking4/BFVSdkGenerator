// Object: Dx11DisplaySettings
// ClassId: 4967
// RuntimeId: 18976
// TypeInfo: 0x0000000144F17D50
#include "../Render/DxDisplaySettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class Dx11DisplaySettings : public Render::DxDisplaySettings {
        Uint32 StagingBufferPoolItemSizeMin; // 0x118
        Uint32 StagingBufferPoolItemSizeMax; // 0x11C
        Uint32 StagingBufferPoolHeapMemBlockSize; // 0x120
        Float32 StagingBufferPoolItemMaxAge; // 0x124
        CString StagingBufferPoolPreheatString; // 0x128
        Boolean RefDriverEnable; // 0x130
        Boolean DriverInternalThreadingEnable; // 0x131
        Boolean GetDeviceRemovedReasonEnable; // 0x132
        Boolean DrawMemoryGraph; // 0x133
        Boolean MemoryPoolsEnable; // 0x134
        Boolean NvPerfHudEnable; // 0x135
        Boolean AnnotationInterfaceEnable; // 0x136
        Boolean AmdQuadsEnable; // 0x137
        Boolean AmdGenerateMipsWorkaroundEnable; // 0x138
        Boolean AmdAgsEnable; // 0x139
        Boolean AmdQuadPrimitiveEnable; // 0x13A
        Boolean AmdRectPrimitiveEnable; // 0x13B
        Boolean AmdDriverOptimizationsEnable; // 0x13C
        Boolean DepthBoundsExtensionEnable; // 0x13D
        Boolean AmdCrossfireControlDefaultSync; // 0x13E
        Boolean AmdCrossfireControlUseBroadcast; // 0x13F
        Boolean Dx11Dot1Enable; // 0x140
        Boolean Dx11Dot1RuntimeEnable; // 0x141
        Boolean EndFrameJobEnable; // 0x142
        Boolean DepthStencilExtensionEnable; // 0x143
        Boolean ForceRenderTargetInEsramTest; // 0x144
        Boolean RenderdocCaptureEnable; // 0x145
        Boolean ReZEnable; // 0x146
        Boolean UseStagingResourcePool; // 0x147
        Boolean ReleaseCmdJobsEnable; // 0x148
        Boolean GpuProfilerEnable; // 0x149
        char pad_0x14A[0x6];
    }; // 0x150
    static_assert(sizeof(Dx11DisplaySettings) == 0x150);
}
#pragma pack(pop)