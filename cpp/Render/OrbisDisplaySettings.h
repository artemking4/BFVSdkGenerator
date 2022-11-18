// Object: OrbisDisplaySettings
// ClassId: 4969
// RuntimeId: 9636
// TypeInfo: 0x0000000144F17450
#include "../Render/BaseDisplaySettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Render {
    class OrbisDisplaySettings : public Render::BaseDisplaySettings {
        Uint32 ScreenWidth; // 0xC8
        Uint32 ScreenHeight; // 0xCC
        Uint32 CommandBufferDebugMode; // 0xD0
        Uint32 CommandBufferLifetime; // 0xD4
        Uint32 LinearTransientVideoSharedSize; // 0xD8
        Uint32 LinearFrameBufferSystemSharedSize; // 0xDC
        Uint32 LinearFrameBufferVideoSharedSize; // 0xE0
        Uint32 MipsStatsFreq; // 0xE4
        Uint32 MipsStatsTextureSize; // 0xE8
        Boolean ComputeQueueEnable; // 0xEC
        Boolean SupportsCommandBuffers; // 0xED
        Boolean SupportsAsyncCommandBuffers; // 0xEE
        Boolean AsyncResourceManagerEnable; // 0xEF
        Boolean MemoryPoolsEnable; // 0xF0
        Boolean CMaskEnable; // 0xF1
        Boolean CMaskFastClear; // 0xF2
        Boolean DccEnable; // 0xF3
        Boolean DccDecompress; // 0xF4
        Boolean HTileEnable; // 0xF5
        Boolean HTileStencilEnable; // 0xF6
        Boolean HTileFastClear; // 0xF7
        Boolean HTileBreak; // 0xF8
        Boolean ReZEnable; // 0xF9
        Boolean ZeroViewportEnable; // 0xFA
        Boolean StateCache; // 0xFB
        Boolean HeavySynchronization; // 0xFC
        Boolean MipsStatsEnable; // 0xFD
        Boolean MipsStatsStart; // 0xFE
        Boolean MipsStatsStop; // 0xFF
        Boolean MipsStatsClearStats; // 0x100
        Boolean MipsStatsReportDump; // 0x101
        Boolean MipsStatsSingleCapture; // 0x102
        char pad_0x103[0x5];
    }; // 0x108
    static_assert(sizeof(OrbisDisplaySettings) == 0x108);
}
#pragma pack(pop)