// Object: StepLogicSamplerNodeConfigData
// ClassId: 942
// RuntimeId: 48045
// TypeInfo: 0x0000000144DB6B90
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Audio/GainFaderFadeType.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class StepLogicSamplerNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 Amplitude; // 0x28
        Float32 Pitch; // 0x2C
        Float32 RateOfFire; // 0x30
        char pad_0x34[0x4];
        Audio::SoundWaveAssetBase Wave; // 0x38
        Float32 MaximumRateOfFire; // 0x40
        Audio::GainFaderFadeType FadeType; // 0x44
    }; // 0x48
    static_assert(sizeof(StepLogicSamplerNodeConfigData) == 0x48);
}
#pragma pack(pop)