// Object: WaveSwitcherNodeData
// ClassId: 1119
// RuntimeId: 60199
// TypeInfo: 0x0000000144E021F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class WaveSwitcherNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Index; // 0x18
        Audio::AudioGraphNodePort Advance; // 0x20
        Audio::AudioGraphNodePort Wave; // 0x28
        Audio::AudioGraphNodePort IndexChanged; // 0x30
        Array<Audio::SoundWaveAssetBase> Waves; // 0x38
        Float32 DefaultIndex; // 0x40
        Boolean WrapIndex; // 0x44
        Boolean IsRandom; // 0x45
        Boolean RandomStartIndex; // 0x46
        char pad_0x47[0x1];
    }; // 0x48
    static_assert(sizeof(WaveSwitcherNodeData) == 0x48);
}
#pragma pack(pop)