// Object: SortValuesNodeData
// ClassId: 1097
// RuntimeId: 44146
// TypeInfo: 0x0000000144DC3600
#include "../Audio/AudioGraphNodeData.h"
#include "../DiceCommonsShared/SortValuesGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SortValuesNodeData : public Audio::AudioGraphNodeData {
        Array<DiceCommonsShared::SortValuesGroup> SortValues; // 0x18
    }; // 0x20
    static_assert(sizeof(SortValuesNodeData) == 0x20);
}
#pragma pack(pop)