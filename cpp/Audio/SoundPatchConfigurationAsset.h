// Object: SoundPatchConfigurationAsset
// ClassId: 743
// RuntimeId: 64506
// TypeInfo: 0x0000000144E16340
#include "../Audio/SoundAsset.h"
#include "../Audio/SoundPatchAsset.h"
#include "../Global/Float32.h"
#include "../Audio/SoundScopeData.h"
#include "../Audio/MixerAsset.h"
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/AudioGraphParameterConfigData.h"
#include "../Audio/SoundPatchConfigurationDebugData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundPatchConfigurationAsset : public Audio::SoundAsset {
        Audio::SoundPatchAsset Sound; // 0x30
        Float32 Loudness; // 0x38
        char pad_0x3C[0x4];
        Audio::SoundScopeData Scope; // 0x40
        Float32 Radius; // 0x48
        Float32 DopplerFactor; // 0x4C
        Float32 MasterPitch; // 0x50
        char pad_0x54[0x4];
        Audio::MixerAsset Mixer; // 0x58
        Array<Audio::AudioGraphNodeConfigData> NodeConfigs; // 0x60
        Array<Audio::AudioGraphParameterConfigData> ParameterConfigs; // 0x68
        Audio::SoundPatchConfigurationDebugData DebugData; // 0x70
        Boolean IsLoudnessConfigured; // 0x78
        Boolean IsScopeConfigured; // 0x79
        Boolean IsRadiusConfigured; // 0x7A
        Boolean IsDopplerFactorConfigured; // 0x7B
        Boolean IsMasterPitchConfigured; // 0x7C
        Boolean IsMixerConfigured; // 0x7D
        char pad_0x7E[0x2];
    }; // 0x80
    static_assert(sizeof(SoundPatchConfigurationAsset) == 0x80);
}
#pragma pack(pop)