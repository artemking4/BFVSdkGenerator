// Object: DelayNodeData
// ClassId: 980
// RuntimeId: 34346
// TypeInfo: 0x0000000144E03E70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class DelayNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort DelayTime; // 0x20
        Audio::AudioGraphNodePort Feedback; // 0x28
        Audio::AudioGraphNodePort Out; // 0x30
        Float32 MaxDelayTime; // 0x38
        Audio::SoundGraphPluginRef Plugin; // 0x3C
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(DelayNodeData) == 0x40);
}
#pragma pack(pop)