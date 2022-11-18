// Object: SamplerNodeConfigData
// ClassId: 939
// RuntimeId: 17423
// TypeInfo: 0x0000000144E025F0
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"
#include "../Audio/SoundWaveAssetBase.h"

#pragma pack(push, 8)
namespace Audio {
    class SamplerNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 Amplitude; // 0x28
        Float32 Delay; // 0x2C
        Float32 Offset; // 0x30
        Float32 Pitch; // 0x34
        Audio::SoundWaveAssetBase Wave; // 0x38
    }; // 0x40
    static_assert(sizeof(SamplerNodeConfigData) == 0x40);
}
#pragma pack(pop)