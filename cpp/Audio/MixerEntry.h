// Object: MixerEntry
// ClassId: 1145
// RuntimeId: 32294
// TypeInfo: 0x0000000144E032F0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::SoundGraphPluginRef Plugin; // 0x28
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(MixerEntry) == 0x30);
}
#pragma pack(pop)