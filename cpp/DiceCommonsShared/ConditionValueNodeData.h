// Object: ConditionValueNodeData
// ClassId: 970
// RuntimeId: 62587
// TypeInfo: 0x0000000144DC1300
#include "../Audio/AudioGraphNodeData.h"
#include "../DiceCommonsShared/ConditionValueGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ConditionValueNodeData : public Audio::AudioGraphNodeData {
        Array<DiceCommonsShared::ConditionValueGroup> Conditions; // 0x18
    }; // 0x20
    static_assert(sizeof(ConditionValueNodeData) == 0x20);
}
#pragma pack(pop)