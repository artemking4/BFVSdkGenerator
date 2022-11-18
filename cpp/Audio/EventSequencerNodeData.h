// Object: EventSequencerNodeData
// ClassId: 994
// RuntimeId: 10658
// TypeInfo: 0x0000000144E18040
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/EventSequencerOutEvent.h"
#include "../Audio/EventSequencerPlayback.h"
#include "../Global/Boolean.h"
#include "../Audio/EventSequencerNodeVersion.h"

#pragma pack(push, 8)
namespace Audio {
    class EventSequencerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Stop; // 0x20
        Audio::AudioGraphNodePort Interval; // 0x28
        Audio::AudioGraphNodePort IntervalVariation; // 0x30
        Audio::AudioGraphNodePort Repeat; // 0x38
        Audio::AudioGraphNodePort RepeatVariation; // 0x40
        Array<Audio::EventSequencerOutEvent> OutEvents; // 0x48
        Audio::EventSequencerPlayback Playback; // 0x50
        Audio::EventSequencerNodeVersion Version; // 0x54
        Boolean IgnoreFirstInterval; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(EventSequencerNodeData) == 0x60);
}
#pragma pack(pop)