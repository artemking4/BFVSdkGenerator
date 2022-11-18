// Object: SimpleValueSelectorNodeData
// ClassId: 1095
// RuntimeId: 63603
// TypeInfo: 0x0000000144E184C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Global/Float32.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class SimpleValueSelectorNodeData : public Audio::AudioGraphNodeData {
        Array<Float32> OutValues; // 0x18
        Audio::AudioGraphNodePort Index; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
    }; // 0x30
    static_assert(sizeof(SimpleValueSelectorNodeData) == 0x30);
}
#pragma pack(pop)