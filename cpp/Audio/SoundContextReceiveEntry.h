// Object: SoundContextReceiveEntry
// ClassId: 1166
// RuntimeId: 40226
// TypeInfo: 0x0000000144E18AC0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundContextData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextReceiveEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Out; // 0x18
        Audio::SoundContextData Context; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundContextReceiveEntry) == 0x28);
}
#pragma pack(pop)