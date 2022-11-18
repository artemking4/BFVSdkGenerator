// Object: HighPassIir2NodeData
// ClassId: 1008
// RuntimeId: 39605
// TypeInfo: 0x0000000144E03770
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class HighPassIir2NodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Frequency; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Audio::SoundGraphPluginRef Plugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(HighPassIir2NodeData) == 0x38);
}
#pragma pack(pop)