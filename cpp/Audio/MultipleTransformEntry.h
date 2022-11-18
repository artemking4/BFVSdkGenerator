// Object: MultipleTransformEntry
// ClassId: 1153
// RuntimeId: 58913
// TypeInfo: 0x0000000144E185C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SimpleTransformOperation.h"
#include "../Audio/AngleUnit.h"

#pragma pack(push, 8)
namespace Audio {
    class MultipleTransformEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Y; // 0x18
        Audio::AudioGraphNodePort Z; // 0x20
        Audio::SimpleTransformOperation Operation; // 0x28
        Audio::AngleUnit AngleUnit; // 0x2C
    }; // 0x30
    static_assert(sizeof(MultipleTransformEntry) == 0x30);
}
#pragma pack(pop)