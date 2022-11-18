// Object: EventDelayNodeData
// ClassId: 990
// RuntimeId: 45347
// TypeInfo: 0x0000000144E19FC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/EventDelayNodeEntry.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class EventDelayNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::EventDelayNodeEntry> Events; // 0x18
        Audio::AudioGraphNodePort DelayTime; // 0x20
        Float32 MaxDelayTime; // 0x28
        Uint32 MaxUpdatesPerSecond; // 0x2C
    }; // 0x30
    static_assert(sizeof(EventDelayNodeData) == 0x30);
}
#pragma pack(pop)