// Object: EventDelayNodeEntry
// ClassId: 1129
// RuntimeId: 14800
// TypeInfo: 0x0000000144E1A040
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class EventDelayNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
    }; // 0x28
    static_assert(sizeof(EventDelayNodeEntry) == 0x28);
}
#pragma pack(pop)