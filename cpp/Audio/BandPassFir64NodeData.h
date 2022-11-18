// Object: BandPassFir64NodeData
// ClassId: 958
// RuntimeId: 36942
// TypeInfo: 0x0000000144E04270
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class BandPassFir64NodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Frequency; // 0x20
        Audio::AudioGraphNodePort Bandwidth; // 0x28
        Audio::AudioGraphNodePort Out; // 0x30
        Audio::SoundGraphPluginRef Plugin; // 0x38
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(BandPassFir64NodeData) == 0x40);
}
#pragma pack(pop)