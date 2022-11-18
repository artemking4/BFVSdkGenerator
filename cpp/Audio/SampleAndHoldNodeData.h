// Object: SampleAndHoldNodeData
// ClassId: 1087
// RuntimeId: 24120
// TypeInfo: 0x0000000144E17E40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class SampleAndHoldNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort Hold; // 0x28
        Audio::AudioGraphNodePort Release; // 0x30
    }; // 0x38
    static_assert(sizeof(SampleAndHoldNodeData) == 0x38);
}
#pragma pack(pop)