// Object: MixerInputEntry
// ClassId: 1147
// RuntimeId: 24203
// TypeInfo: 0x0000000144E176C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/MixerValueAccumulateMode.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerInputEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Out; // 0x18
        Audio::AudioGraphParameter Source; // 0x20
        Audio::MixerValueAccumulateMode AccumulateMode; // 0x28
        Boolean KeepValue; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(MixerInputEntry) == 0x30);
}
#pragma pack(pop)