// Object: ChorusNodeData
// ClassId: 965
// RuntimeId: 31680
// TypeInfo: 0x0000000144E040F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ChorusNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 MaxDelay; // 0x28
        Float32 MaxModulationDepth; // 0x2C
        Audio::AudioGraphNodePort TapCount; // 0x30
        Audio::AudioGraphNodePort DelayTime; // 0x38
        Audio::AudioGraphNodePort ModulationDepth; // 0x40
        Audio::AudioGraphNodePort ModulationFrequency; // 0x48
        Audio::SoundGraphPluginRef Plugin; // 0x50
        char pad_0x53[0x5];
    }; // 0x58
    static_assert(sizeof(ChorusNodeData) == 0x58);
}
#pragma pack(pop)