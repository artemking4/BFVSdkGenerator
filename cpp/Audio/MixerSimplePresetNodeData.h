// Object: MixerSimplePresetNodeData
// ClassId: 1047
// RuntimeId: 20633
// TypeInfo: 0x0000000144E174C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/MixerPreset.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSimplePresetNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Index; // 0x18
        Array<Audio::MixerPreset> Presets; // 0x20
    }; // 0x28
    static_assert(sizeof(MixerSimplePresetNodeData) == 0x28);
}
#pragma pack(pop)