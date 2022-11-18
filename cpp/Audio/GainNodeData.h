// Object: GainNodeData
// ClassId: 1004
// RuntimeId: 56185
// TypeInfo: 0x0000000144E039F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class GainNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Audio::SoundGraphPluginRef Plugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(GainNodeData) == 0x38);
}
#pragma pack(pop)