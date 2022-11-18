// Object: HighPassButterworthNodeData
// ClassId: 1006
// RuntimeId: 23666
// TypeInfo: 0x0000000144E03870
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class HighPassButterworthNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Frequency; // 0x20
        Audio::AudioGraphNodePort Order; // 0x28
        Audio::AudioGraphNodePort Out; // 0x30
        Audio::SoundGraphPluginRef Plugin; // 0x38
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(HighPassButterworthNodeData) == 0x40);
}
#pragma pack(pop)