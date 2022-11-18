// Object: SortValuesGroup
// ClassId: 1165
// RuntimeId: 23058
// TypeInfo: 0x0000000144DC3680
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SortValuesGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort SortedValue; // 0x20
        Audio::AudioGraphNodePort InputIndex; // 0x28
    }; // 0x30
    static_assert(sizeof(SortValuesGroup) == 0x30);
}
#pragma pack(pop)