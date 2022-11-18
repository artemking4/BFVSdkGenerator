// Object: ConditionNodeData
// ClassId: 969
// RuntimeId: 213
// TypeInfo: 0x0000000144E1A5C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/ConditionGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class ConditionNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::ConditionGroup> Conditions; // 0x18
    }; // 0x20
    static_assert(sizeof(ConditionNodeData) == 0x20);
}
#pragma pack(pop)