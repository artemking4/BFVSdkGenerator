// Object: MultipleTransformNodeData
// ClassId: 1052
// RuntimeId: 58297
// TypeInfo: 0x0000000144E18540
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/MultipleTransformEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MultipleTransformNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort X; // 0x18
        Array<Audio::MultipleTransformEntry> Transforms; // 0x20
        Audio::AudioGraphNodePort Result; // 0x28
    }; // 0x30
    static_assert(sizeof(MultipleTransformNodeData) == 0x30);
}
#pragma pack(pop)