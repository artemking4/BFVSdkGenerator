// Object: MixerOutputEntry
// ClassId: 1148
// RuntimeId: 10744
// TypeInfo: 0x0000000144E175C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/AudioGraphParameter.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerOutputEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphParameter Target; // 0x20
    }; // 0x28
    static_assert(sizeof(MixerOutputEntry) == 0x28);
}
#pragma pack(pop)