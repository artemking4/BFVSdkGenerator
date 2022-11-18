// Object: EventSequencerOutEvent
// ClassId: 1130
// RuntimeId: 18197
// TypeInfo: 0x0000000144E180C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class EventSequencerOutEvent : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Out; // 0x18
    }; // 0x20
    static_assert(sizeof(EventSequencerOutEvent) == 0x20);
}
#pragma pack(pop)