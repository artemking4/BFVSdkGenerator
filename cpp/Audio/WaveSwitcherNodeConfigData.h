// Object: WaveSwitcherNodeConfigData
// ClassId: 944
// RuntimeId: 46588
// TypeInfo: 0x0000000144E02170
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class WaveSwitcherNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Audio::SoundWaveAssetBase> Waves; // 0x28
        Float32 DefaultIndex; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(WaveSwitcherNodeConfigData) == 0x38);
}
#pragma pack(pop)