// Object: LinearTransformNodeData
// ClassId: 1017
// RuntimeId: 4086
// TypeInfo: 0x0000000144E19CC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class LinearTransformNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort K; // 0x20
        Audio::AudioGraphNodePort M; // 0x28
        Audio::AudioGraphNodePort Y; // 0x30
    }; // 0x38
    static_assert(sizeof(LinearTransformNodeData) == 0x38);
}
#pragma pack(pop)