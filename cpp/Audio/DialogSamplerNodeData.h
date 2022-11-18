// Object: DialogSamplerNodeData
// ClassId: 982
// RuntimeId: 6288
// TypeInfo: 0x0000000144E03DF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/Float32.h"
#include "../Audio/OutputNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class DialogSamplerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Pitch; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::AudioGraphNodePort EnableSubtitles; // 0x28
        Audio::AudioGraphNodePort Continue; // 0x30
        Audio::AudioGraphNodePort Output; // 0x38
        Audio::AudioGraphNodePort Triggered; // 0x40
        Audio::AudioGraphNodePort Finished; // 0x48
        Float32 TailLength; // 0x50
        char pad_0x54[0x4];
        Audio::OutputNodeData PitchSource; // 0x58
        Audio::SoundGraphPluginRef SndPlayerPlugin; // 0x60
        Audio::SoundGraphPluginRef ResamplePlugin; // 0x63
        Audio::SoundGraphPluginRef PausePlugin; // 0x66
        Audio::SoundGraphPluginRef GainPlugin; // 0x69
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(DialogSamplerNodeData) == 0x70);
}
#pragma pack(pop)