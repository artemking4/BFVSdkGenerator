// Object: LowPassIir2NodeData
// ClassId: 1034
// RuntimeId: 39827
// TypeInfo: 0x0000000144E034F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class LowPassIir2NodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Frequency; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Audio::SoundGraphPluginRef Plugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(LowPassIir2NodeData) == 0x38);
}
#pragma pack(pop)