// Object: TimeStretchNodeData
// ClassId: 1106
// RuntimeId: 10920
// TypeInfo: 0x0000000144E02570
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/Float32.h"
#include "../Audio/TimeStretchMultiChannelMode.h"
#include "../Audio/TimeStretchEfficiency.h"

#pragma pack(push, 8)
namespace Audio {
    class TimeStretchNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 WindowSize; // 0x28
        Audio::TimeStretchMultiChannelMode MultiChannelMode; // 0x2C
        Audio::TimeStretchEfficiency Efficiency; // 0x30
        Audio::AudioGraphNodePort StretchRatio; // 0x34
        Audio::SoundGraphPluginRef Plugin; // 0x3C
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(TimeStretchNodeData) == 0x40);
}
#pragma pack(pop)