// Object: PeakingIir2NodeData
// ClassId: 1076
// RuntimeId: 3447
// TypeInfo: 0x0000000144E02B70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class PeakingIir2NodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Frequency; // 0x20
        Audio::AudioGraphNodePort Amplitude; // 0x28
        Audio::AudioGraphNodePort Q; // 0x30
        Audio::AudioGraphNodePort Out; // 0x38
        Audio::SoundGraphPluginRef Plugin; // 0x40
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(PeakingIir2NodeData) == 0x48);
}
#pragma pack(pop)