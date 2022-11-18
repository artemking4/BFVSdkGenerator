// Object: CompareValueNodeData
// ClassId: 967
// RuntimeId: 42003
// TypeInfo: 0x0000000144DC1400
#include "../Audio/AudioGraphNodeData.h"
#include "../DiceCommonsShared/CompareValueGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CompareValueNodeData : public Audio::AudioGraphNodeData {
        Array<DiceCommonsShared::CompareValueGroup> Conditions; // 0x18
    }; // 0x20
    static_assert(sizeof(CompareValueNodeData) == 0x20);
}
#pragma pack(pop)