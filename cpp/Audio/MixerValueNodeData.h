// Object: MixerValueNodeData
// ClassId: 1048
// RuntimeId: 38074
// TypeInfo: 0x0000000144E16EC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerValueNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Out; // 0x18
        Float32 DefaultValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MixerValueNodeData) == 0x28);
}
#pragma pack(pop)