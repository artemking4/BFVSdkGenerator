// Object: OscilloscopeNodeData
// ClassId: 1062
// RuntimeId: 30774
// TypeInfo: 0x0000000144BEBEA0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../AudioCoreVoiceMonitorShared/MonitorNodeData.h"

#pragma pack(push, 8)
namespace AudioCoreVoiceMonitorShared {
    class OscilloscopeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort SamplesPerTimeDivision; // 0x20
        Float32 TriggerLevel; // 0x28
        Int32 TriggerChannel; // 0x2C
        Int32 DisplayChannel; // 0x30
        char pad_0x34[0x4];
        AudioCoreVoiceMonitorShared::MonitorNodeData MonitorNode; // 0x38
        Audio::SoundGraphPluginRef OscilloscopePlugin; // 0x40
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(OscilloscopeNodeData) == 0x48);
}
#pragma pack(pop)