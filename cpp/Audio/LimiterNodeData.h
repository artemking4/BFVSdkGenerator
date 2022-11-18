// Object: LimiterNodeData
// ClassId: 1016
// RuntimeId: 47083
// TypeInfo: 0x0000000144E03670
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/LimiterChannelMode.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class LimiterNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Sidechain; // 0x20
        Audio::AudioGraphNodePort Threshold; // 0x28
        Audio::AudioGraphNodePort ReleaseTime; // 0x30
        Audio::AudioGraphNodePort UseSidechain; // 0x38
        Audio::AudioGraphNodePort Out; // 0x40
        Audio::LimiterChannelMode ChannelMode; // 0x48
        Audio::SoundGraphPluginRef Plugin; // 0x4C
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(LimiterNodeData) == 0x50);
}
#pragma pack(pop)