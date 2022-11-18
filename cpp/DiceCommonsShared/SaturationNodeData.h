// Object: SaturationNodeData
// ClassId: 1089
// RuntimeId: 49079
// TypeInfo: 0x0000000144DC3780
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/SaturationTypes.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SaturationNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Gain; // 0x20
        Audio::AudioGraphNodePort DCBias; // 0x28
        Audio::AudioGraphNodePort Level; // 0x30
        Audio::AudioGraphNodePort Mix; // 0x38
        DiceCommonsShared::SaturationTypes SaturationType; // 0x40
        Audio::AudioGraphNodePort Out; // 0x44
        Audio::SoundGraphPluginRef SaturationPlugin; // 0x4C
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(SaturationNodeData) == 0x50);
}
#pragma pack(pop)