// Object: MixerReceiveEntry
// ClassId: 1149
// RuntimeId: 47587
// TypeInfo: 0x0000000144E17240
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/MixerAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerReceiveEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Out; // 0x18
        Audio::AudioGraphParameter Source; // 0x20
        Audio::MixerAsset Mixer; // 0x28
    }; // 0x30
    static_assert(sizeof(MixerReceiveEntry) == 0x30);
}
#pragma pack(pop)