// Object: WaterInteractSettings
// ClassId: 5041
// RuntimeId: 63808
// TypeInfo: 0x0000000144F716E0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Core/QualityLevel.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace WaterInteractBase {
    class WaterInteractSettings : public Core::SystemSettings {
        Core::QualityLevel WaterQualityLevel; // 0x20
        Uint32 RenderOcclusionCullJobCount; // 0x24
        Uint32 RenderOcclusionGridWidth; // 0x28
        Uint32 RenderOcclusionGridHeight; // 0x2C
        Float32 InteractivePrioAheadDistance; // 0x30
        Uint32 InteractiveGridCount; // 0x34
        Float32 InteractInjectNoiseStrength; // 0x38
        Float32 InteractMaxSlope; // 0x3C
        Float32 InteractUpdateFrequency; // 0x40
        Uint32 SimulationJobCount; // 0x44
        Int32 VirtualHeightfieldAtlasSize; // 0x48
        Int32 VirtualHeightfieldIndirectionSize; // 0x4C
        Float32 VirtualHeightfieldQuantizationRange; // 0x50
        Boolean Enable; // 0x54
        Boolean DrawEnable; // 0x55
        Boolean DrawUpdateEnable; // 0x56
        Boolean RenderDebugEnable; // 0x57
        Boolean OceanVisualCpuSimulationEnable; // 0x58
        Boolean RenderDebugFreezeViewEnable; // 0x59
        Boolean RenderDebugTexturesEnable; // 0x5A
        Boolean DrawGridEnable; // 0x5B
        Boolean RaytraceEnable; // 0x5C
        Boolean RenderOcclusionCullEnable; // 0x5D
        Boolean EnableSimulation; // 0x5E
        Boolean EnableDisturbs; // 0x5F
        Boolean EnableLOD; // 0x60
        Boolean EnableJobs; // 0x61
        Boolean EnableCounterFovScale; // 0x62
        char pad_0x63[0x5];
    }; // 0x68
    static_assert(sizeof(WaterInteractSettings) == 0x68);
}
#pragma pack(pop)