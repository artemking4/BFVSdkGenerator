// Object: SequenceGeneratorNodeData
// ClassId: 1092
// RuntimeId: 23277
// TypeInfo: 0x0000000144E186C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SequenceGeneratorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Trigger; // 0x18
        Audio::AudioGraphNodePort Reset; // 0x20
        Audio::AudioGraphNodePort Min; // 0x28
        Audio::AudioGraphNodePort Max; // 0x30
        Audio::AudioGraphNodePort Step; // 0x38
        Audio::AudioGraphNodePort Value; // 0x40
        Boolean UpdateValueOnEvents; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(SequenceGeneratorNodeData) == 0x50);
}
#pragma pack(pop)