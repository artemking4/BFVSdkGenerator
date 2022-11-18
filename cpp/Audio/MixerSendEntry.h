// Object: MixerSendEntry
// ClassId: 1150
// RuntimeId: 62460
// TypeInfo: 0x0000000144E17140
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/MixerAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSendEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphParameter Target; // 0x20
        Audio::MixerAsset Mixer; // 0x28
    }; // 0x30
    static_assert(sizeof(MixerSendEntry) == 0x30);
}
#pragma pack(pop)