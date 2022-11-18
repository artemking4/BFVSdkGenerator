// Object: ControllerOutputNodeData
// ClassId: 974
// RuntimeId: 13776
// TypeInfo: 0x0000000144E03FF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class ControllerOutputNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Connected; // 0x20
        Audio::AudioGraphNodePort Disconnected; // 0x28
        Audio::SoundGraphPluginRef Plugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(ControllerOutputNodeData) == 0x38);
}
#pragma pack(pop)