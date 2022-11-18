// Object: ValueSelectorNodeData
// ClassId: 1113
// RuntimeId: 63627
// TypeInfo: 0x0000000144E18140
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/ValueSelectorEntry.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ValueSelectorNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::ValueSelectorEntry> Inputs; // 0x18
        Audio::AudioGraphNodePort Value; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Float32 DefaultCaseValue; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ValueSelectorNodeData) == 0x38);
}
#pragma pack(pop)