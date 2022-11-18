// Object: ActivateMixerNodeData
// ClassId: 946
// RuntimeId: 35425
// TypeInfo: 0x0000000144E01FF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerAsset.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class ActivateMixerNodeData : public Audio::AudioGraphNodeData {
        Audio::MixerAsset Mixer; // 0x18
        Audio::AudioGraphNodePort Activate; // 0x20
        Audio::AudioGraphNodePort Deactivate; // 0x28
    }; // 0x30
    static_assert(sizeof(ActivateMixerNodeData) == 0x30);
}
#pragma pack(pop)