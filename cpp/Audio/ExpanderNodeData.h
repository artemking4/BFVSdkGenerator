// Object: ExpanderNodeData
// ClassId: 996
// RuntimeId: 42755
// TypeInfo: 0x0000000144E03CF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/ExpanderChannelMode.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class ExpanderNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Sidechain; // 0x20
        Audio::AudioGraphNodePort Threshold; // 0x28
        Audio::AudioGraphNodePort Ratio; // 0x30
        Audio::AudioGraphNodePort AttackTime; // 0x38
        Audio::AudioGraphNodePort ReleaseTime; // 0x40
        Audio::AudioGraphNodePort UseSidechain; // 0x48
        Audio::AudioGraphNodePort Out; // 0x50
        Audio::ExpanderChannelMode ChannelMode; // 0x58
        Audio::SoundGraphPluginRef Plugin; // 0x5C
        char pad_0x5F[0x1];
    }; // 0x60
    static_assert(sizeof(ExpanderNodeData) == 0x60);
}
#pragma pack(pop)