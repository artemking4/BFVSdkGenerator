// Object: IndexMapperNodeData
// ClassId: 1010
// RuntimeId: 21402
// TypeInfo: 0x0000000144DC3D80
#include "../Audio/AudioGraphNodeData.h"
#include "../DiceCommonsShared/IndexMapperGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class IndexMapperNodeData : public Audio::AudioGraphNodeData {
        Array<DiceCommonsShared::IndexMapperGroup> DimensionGroups; // 0x18
        Audio::AudioGraphNodePort Result; // 0x20
    }; // 0x28
    static_assert(sizeof(IndexMapperNodeData) == 0x28);
}
#pragma pack(pop)