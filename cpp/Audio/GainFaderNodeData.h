// Object: GainFaderNodeData
// ClassId: 1003
// RuntimeId: 63896
// TypeInfo: 0x0000000144E03970
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/GainFaderFadeType.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class GainFaderNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Start; // 0x20
        Audio::AudioGraphNodePort StartTime; // 0x28
        Audio::AudioGraphNodePort FadeTime; // 0x30
        Audio::AudioGraphNodePort Amplitude; // 0x38
        Audio::AudioGraphNodePort Out; // 0x40
        Audio::GainFaderFadeType FadeType; // 0x48
        Audio::SoundGraphPluginRef Plugin; // 0x4C
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(GainFaderNodeData) == 0x50);
}
#pragma pack(pop)