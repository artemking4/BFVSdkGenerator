// Object: SoundContextSendEntry
// ClassId: 1167
// RuntimeId: 10826
// TypeInfo: 0x0000000144E189C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundContextData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextSendEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::SoundContextData Context; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundContextSendEntry) == 0x28);
}
#pragma pack(pop)