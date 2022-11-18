// Object: DacNodeData
// ClassId: 978
// RuntimeId: 9275
// TypeInfo: 0x0000000144E03EF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class DacNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Hrtf; // 0x20
        Audio::SoundGraphPluginRef DelayPlugin; // 0x28
        Audio::SoundGraphPluginRef VuPlugin; // 0x2B
        Audio::SoundGraphPluginRef GainPlugin; // 0x2E
        Audio::SoundGraphPluginRef DacPlugin; // 0x31
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(DacNodeData) == 0x38);
}
#pragma pack(pop)