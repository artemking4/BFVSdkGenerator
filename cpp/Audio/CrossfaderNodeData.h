// Object: CrossfaderNodeData
// ClassId: 977
// RuntimeId: 12893
// TypeInfo: 0x0000000144E03F70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class CrossfaderNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In1; // 0x18
        Audio::AudioGraphNodePort In2; // 0x20
        Audio::AudioGraphNodePort Ctrl; // 0x28
        Audio::AudioGraphNodePort Out; // 0x30
        Audio::SoundGraphPluginRef Plugin1; // 0x38
        Audio::SoundGraphPluginRef Plugin2; // 0x3B
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(CrossfaderNodeData) == 0x40);
}
#pragma pack(pop)