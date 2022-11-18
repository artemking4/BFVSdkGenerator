// Object: MasterUnitNodeData
// ClassId: 1036
// RuntimeId: 3693
// TypeInfo: 0x0000000144E033F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/MasterUnitSettings.h"

#pragma pack(push, 8)
namespace Audio {
    class MasterUnitNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort SettingsIndex; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::AudioGraphNodePort MasterGain; // 0x28
        Audio::AudioGraphNodePort MasterLfeGain; // 0x30
        Audio::AudioGraphNodePort MasterDialogGain; // 0x38
        Audio::AudioGraphNodePort MainMixGain; // 0x40
        Audio::AudioGraphNodePort PostEffectsGain; // 0x48
        Audio::AudioGraphNodePort ReverbGain; // 0x50
        Audio::AudioGraphNodePort FadeTime; // 0x58
        Audio::AudioGraphNodePort HighPassFreq; // 0x60
        Audio::AudioGraphNodePort LowShelfFreq; // 0x68
        Audio::AudioGraphNodePort LowShelfGain; // 0x70
        Audio::AudioGraphNodePort HighShelfFreq; // 0x78
        Audio::AudioGraphNodePort HighShelfGain; // 0x80
        Audio::AudioGraphNodePort CompThreshold; // 0x88
        Audio::AudioGraphNodePort CompRatio; // 0x90
        Audio::AudioGraphNodePort CompAttack; // 0x98
        Audio::AudioGraphNodePort CompRelease; // 0xA0
        Audio::AudioGraphNodePort DistClipLevel; // 0xA8
        Audio::AudioGraphNodePort ParallelDistortionGain; // 0xB0
        Array<Audio::MasterUnitSettings> Settings; // 0xB8
    }; // 0xC0
    static_assert(sizeof(MasterUnitNodeData) == 0xC0);
}
#pragma pack(pop)