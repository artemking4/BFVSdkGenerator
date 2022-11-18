// Object: MixerGetPropertyEntry
// ClassId: 1146
// RuntimeId: 6293
// TypeInfo: 0x0000000144E17340
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint32.h"
#include "../Audio/MixGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerGetPropertyEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Out; // 0x18
        Uint32 Property; // 0x20
        char pad_0x24[0x4];
        Audio::MixGroup Group; // 0x28
    }; // 0x30
    static_assert(sizeof(MixerGetPropertyEntry) == 0x30);
}
#pragma pack(pop)