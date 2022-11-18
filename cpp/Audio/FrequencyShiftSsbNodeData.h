// Object: FrequencyShiftSsbNodeData
// ClassId: 1002
// RuntimeId: 37233
// TypeInfo: 0x0000000144E03A70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/FrequencyShiftSsbFilter.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class FrequencyShiftSsbNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Frequency; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Audio::FrequencyShiftSsbFilter Filter; // 0x30
        Audio::SoundGraphPluginRef Plugin; // 0x34
        char pad_0x37[0x1];
    }; // 0x38
    static_assert(sizeof(FrequencyShiftSsbNodeData) == 0x38);
}
#pragma pack(pop)