// Object: EventGateNodeData
// ClassId: 992
// RuntimeId: 8726
// TypeInfo: 0x0000000144E19F40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class EventGateNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort CoolDownTime; // 0x28
        Audio::AudioGraphNodePort Probability; // 0x30
        Audio::AudioGraphNodePort Enable; // 0x38
    }; // 0x40
    static_assert(sizeof(EventGateNodeData) == 0x40);
}
#pragma pack(pop)