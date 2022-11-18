// Object: MinMaxNodeData
// ClassId: 1038
// RuntimeId: 34121
// TypeInfo: 0x0000000144E19340
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class MinMaxNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort Y; // 0x20
        Audio::AudioGraphNodePort Max; // 0x28
        Audio::AudioGraphNodePort Min; // 0x30
    }; // 0x38
    static_assert(sizeof(MinMaxNodeData) == 0x38);
}
#pragma pack(pop)