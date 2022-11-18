// Object: ParameterDelayNodeEntry
// ClassId: 1157
// RuntimeId: 8730
// TypeInfo: 0x0000000144E18F40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterDelayNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 DefaultValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ParameterDelayNodeEntry) == 0x30);
}
#pragma pack(pop)