// Object: ConditionGroup
// ClassId: 1122
// RuntimeId: 46943
// TypeInfo: 0x0000000144E1A640
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"
#include "../Audio/ConditionType.h"

#pragma pack(push, 8)
namespace Audio {
    class ConditionGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort Y; // 0x20
        Audio::AudioGraphNodePort True; // 0x28
        Audio::AudioGraphNodePort Evaluate; // 0x30
        Audio::ConditionType Condition; // 0x38
        Boolean AutoEvaluate; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(ConditionGroup) == 0x40);
}
#pragma pack(pop)