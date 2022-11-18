// Object: SinePlayerNodeData
// ClassId: 1096
// RuntimeId: 27239
// TypeInfo: 0x0000000144E038F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Global/Uint32.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class SinePlayerNodeData : public Audio::AudioGraphNodeData {
        Uint32 ChannelCount; // 0x18
        Audio::AudioGraphNodePort Start; // 0x1C
        Audio::AudioGraphNodePort Stop; // 0x24
        Audio::AudioGraphNodePort Frequency; // 0x2C
        Audio::AudioGraphNodePort Out; // 0x34
        Audio::SoundGraphPluginRef Plugin; // 0x3C
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(SinePlayerNodeData) == 0x40);
}
#pragma pack(pop)