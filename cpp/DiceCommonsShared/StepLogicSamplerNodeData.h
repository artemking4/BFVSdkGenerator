// Object: StepLogicSamplerNodeData
// ClassId: 1102
// RuntimeId: 52978
// TypeInfo: 0x0000000144DB6C10
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../DiceCommonsShared/StepLogicSamplerPlugins.h"
#include "../Audio/OutputNodeData.h"
#include "../Global/Float32.h"
#include "../Audio/GainFaderFadeType.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/StepLogicSamplerNodeDebugData.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class StepLogicSamplerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort ExternalWave; // 0x18
        Audio::AudioGraphNodePort Pitch; // 0x20
        Audio::AudioGraphNodePort Amplitude; // 0x28
        Audio::AudioGraphNodePort RateOfFire; // 0x30
        Audio::AudioGraphNodePort Trigger; // 0x38
        Audio::AudioGraphNodePort Release; // 0x40
        Audio::AudioGraphNodePort Output; // 0x48
        Audio::AudioGraphNodePort Finished; // 0x50
        Audio::SoundWaveAssetBase Wave; // 0x58
        Array<DiceCommonsShared::StepLogicSamplerPlugins> Plugins; // 0x60
        Audio::OutputNodeData PitchSource; // 0x68
        Float32 MaximumRateOfFire; // 0x70
        Audio::GainFaderFadeType FadeType; // 0x74
        DiceCommonsShared::StepLogicSamplerNodeDebugData SamplerNodeDebug; // 0x78
        Boolean InstantRelease; // 0x80
        char pad_0x81[0x7];
    }; // 0x88
    static_assert(sizeof(StepLogicSamplerNodeData) == 0x88);
}
#pragma pack(pop)