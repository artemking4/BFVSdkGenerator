// Object: EventSwitcherNodeData
// ClassId: 995
// RuntimeId: 20527
// TypeInfo: 0x0000000144E19E40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/EventSwitcherEntry.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class EventSwitcherNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::EventSwitcherEntry> Inputs; // 0x18
        Audio::AudioGraphNodePort Triggered; // 0x20
        Audio::AudioGraphNodePort Value; // 0x28
        Float32 DefaultValue; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(EventSwitcherNodeData) == 0x38);
}
#pragma pack(pop)