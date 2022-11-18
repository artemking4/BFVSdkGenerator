// Object: CompareValueGroup
// ClassId: 1121
// RuntimeId: 50472
// TypeInfo: 0x0000000144DC1480
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/CompareValueConditionType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CompareValueGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Evaluate; // 0x18
        Audio::AudioGraphNodePort X; // 0x20
        Audio::AudioGraphNodePort Y; // 0x28
        Audio::AudioGraphNodePort True; // 0x30
        Audio::AudioGraphNodePort False; // 0x38
        DiceCommonsShared::CompareValueConditionType Condition; // 0x40
        Boolean AutoEvaluate; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(CompareValueGroup) == 0x48);
}
#pragma pack(pop)