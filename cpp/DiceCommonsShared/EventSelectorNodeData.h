// Object: EventSelectorNodeData
// ClassId: 993
// RuntimeId: 21423
// TypeInfo: 0x0000000144DC4000
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/InputEventsGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EventSelectorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Index; // 0x18
        Array<DiceCommonsShared::InputEventsGroup> InputEvents; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
    }; // 0x30
    static_assert(sizeof(EventSelectorNodeData) == 0x30);
}
#pragma pack(pop)