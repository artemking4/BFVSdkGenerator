// Object: IndexMapperNodeConfigData
// ClassId: 926
// RuntimeId: 7273
// TypeInfo: 0x0000000144DC3D00
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../DiceCommonsShared/IndexMapperConfigGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class IndexMapperNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<DiceCommonsShared::IndexMapperConfigGroup> DimensionGroups; // 0x28
    }; // 0x30
    static_assert(sizeof(IndexMapperNodeConfigData) == 0x30);
}
#pragma pack(pop)