// Object: SimpleTransformNodeData
// ClassId: 1094
// RuntimeId: 2299
// TypeInfo: 0x0000000144E18640
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SimpleTransformOperation.h"
#include "../Audio/AngleUnit.h"

#pragma pack(push, 8)
namespace Audio {
    class SimpleTransformNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort Y; // 0x20
        Audio::AudioGraphNodePort Z; // 0x28
        Audio::SimpleTransformOperation Operation; // 0x30
        Audio::AngleUnit AngleUnit; // 0x34
    }; // 0x38
    static_assert(sizeof(SimpleTransformNodeData) == 0x38);
}
#pragma pack(pop)