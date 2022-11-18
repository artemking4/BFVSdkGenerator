// Object: ConditionValueGroup
// ClassId: 1123
// RuntimeId: 38313
// TypeInfo: 0x0000000144DC1380
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/ConditionValueType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ConditionValueGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort Y; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        DiceCommonsShared::ConditionValueType Condition; // 0x30
        Float32 ValueIfTrue; // 0x34
        Float32 ValueIfFalse; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(ConditionValueGroup) == 0x40);
}
#pragma pack(pop)