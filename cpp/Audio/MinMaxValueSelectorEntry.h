// Object: MinMaxValueSelectorEntry
// ClassId: 1144
// RuntimeId: 36115
// TypeInfo: 0x0000000144E192C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class MinMaxValueSelectorEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Input; // 0x18
    }; // 0x20
    static_assert(sizeof(MinMaxValueSelectorEntry) == 0x20);
}
#pragma pack(pop)