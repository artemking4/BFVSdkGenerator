// Object: EventGateConditionValueNodeData
// ClassId: 991
// RuntimeId: 39856
// TypeInfo: 0x0000000144DC4100
#include "../Audio/AudioGraphNodeData.h"
#include "../DiceCommonsShared/EventGateConditionValueType.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EventGateConditionValueNodeData : public Audio::AudioGraphNodeData {
        DiceCommonsShared::EventGateConditionValueType Condition; // 0x18
        Audio::AudioGraphNodePort In; // 0x1C
        Audio::AudioGraphNodePort InValue; // 0x24
        Audio::AudioGraphNodePort CoolDownTime; // 0x2C
        Audio::AudioGraphNodePort Enable; // 0x34
        Audio::AudioGraphNodePort Out; // 0x3C
        Audio::AudioGraphNodePort OutValue; // 0x44
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(EventGateConditionValueNodeData) == 0x50);
}
#pragma pack(pop)