// Object: MinMaxValueSelectorNodeData
// ClassId: 1039
// RuntimeId: 23462
// TypeInfo: 0x0000000144E19240
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MinMaxValueSelectorEntry.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class MinMaxValueSelectorNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MinMaxValueSelectorEntry> Inputs; // 0x18
        Audio::AudioGraphNodePort MaxValue; // 0x20
        Audio::AudioGraphNodePort MaxIndex; // 0x28
        Audio::AudioGraphNodePort MinValue; // 0x30
        Audio::AudioGraphNodePort MinIndex; // 0x38
    }; // 0x40
    static_assert(sizeof(MinMaxValueSelectorNodeData) == 0x40);
}
#pragma pack(pop)