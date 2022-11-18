// Object: MixerSetPropertyEntry
// ClassId: 1151
// RuntimeId: 20552
// TypeInfo: 0x0000000144E17440
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint32.h"
#include "../Audio/MixGroup.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSetPropertyEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Uint32 Target; // 0x20
        char pad_0x24[0x4];
        Audio::MixGroup Group; // 0x28
        Float32 AttackTime; // 0x30
        Float32 ReleaseTime; // 0x34
    }; // 0x38
    static_assert(sizeof(MixerSetPropertyEntry) == 0x38);
}
#pragma pack(pop)