// Object: SpectrumAnalyzerNodeData
// ClassId: 1101
// RuntimeId: 16518
// TypeInfo: 0x0000000144BEBE20
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../AudioCoreVoiceMonitorShared/WindowSize.h"
#include "../AudioCoreVoiceMonitorShared/WindowFunction.h"
#include "../AudioCoreVoiceMonitorShared/UpdatePeriod.h"
#include "../AudioCoreVoiceMonitorShared/SpectrumAveragingType.h"
#include "../Global/Float32.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../AudioCoreVoiceMonitorShared/MonitorNodeData.h"

#pragma pack(push, 8)
namespace AudioCoreVoiceMonitorShared {
    class SpectrumAnalyzerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        AudioCoreVoiceMonitorShared::WindowSize WindowSize; // 0x20
        AudioCoreVoiceMonitorShared::WindowFunction WindowFunction; // 0x24
        AudioCoreVoiceMonitorShared::UpdatePeriod UpdatePeriod; // 0x28
        AudioCoreVoiceMonitorShared::SpectrumAveragingType AveragingType; // 0x2C
        Float32 AveragingTime; // 0x30
        char pad_0x34[0x4];
        AudioCoreVoiceMonitorShared::MonitorNodeData MonitorNode; // 0x38
        Audio::SoundGraphPluginRef SpectrumAnalyzerPlugin; // 0x40
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(SpectrumAnalyzerNodeData) == 0x48);
}
#pragma pack(pop)