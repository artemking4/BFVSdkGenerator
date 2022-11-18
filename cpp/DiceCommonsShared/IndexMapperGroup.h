// Object: IndexMapperGroup
// ClassId: 1132
// RuntimeId: 52628
// TypeInfo: 0x0000000144DC3E00
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class IndexMapperGroup : public Audio::AudioGraphNodePortGroup {
        Guid Guid; // 0x18
        Uint32 DimensionSize; // 0x28
        Audio::AudioGraphNodePort In; // 0x2C
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(IndexMapperGroup) == 0x38);
}
#pragma pack(pop)