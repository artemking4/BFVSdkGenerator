// Object: MusicLayerEntry
// ClassId: 1154
// RuntimeId: 38016
// TypeInfo: 0x0000000144E1CDC0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicLayerEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Amplitude; // 0x18
        Audio::AudioGraphNodePort Output; // 0x20
    }; // 0x28
    static_assert(sizeof(MusicLayerEntry) == 0x28);
}
#pragma pack(pop)