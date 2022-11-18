// Object: InputWavesGroup
// ClassId: 1134
// RuntimeId: 63073
// TypeInfo: 0x0000000144DB6990
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/SoundWaveAsset.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class InputWavesGroup : public Audio::AudioGraphNodePortGroup {
        Audio::SoundWaveAsset DefaultWave; // 0x18
        Audio::AudioGraphNodePort Wave; // 0x20
    }; // 0x28
    static_assert(sizeof(InputWavesGroup) == 0x28);
}
#pragma pack(pop)