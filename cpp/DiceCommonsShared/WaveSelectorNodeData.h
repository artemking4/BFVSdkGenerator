// Object: WaveSelectorNodeData
// ClassId: 1118
// RuntimeId: 6217
// TypeInfo: 0x0000000144DB6910
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint32.h"
#include "../DiceCommonsShared/InputWavesGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class WaveSelectorNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort OutputWave; // 0x18
        Audio::AudioGraphNodePort Value; // 0x20
        Uint32 DefaultCaseValue; // 0x28
        char pad_0x2C[0x4];
        Array<DiceCommonsShared::InputWavesGroup> InputWaves; // 0x30
    }; // 0x38
    static_assert(sizeof(WaveSelectorNodeData) == 0x38);
}
#pragma pack(pop)