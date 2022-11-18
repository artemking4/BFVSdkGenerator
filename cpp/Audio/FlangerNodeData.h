// Object: FlangerNodeData
// ClassId: 998
// RuntimeId: 25129
// TypeInfo: 0x0000000144E03AF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class FlangerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 MaxDelay; // 0x28
        Float32 MaxModulationDepth; // 0x2C
        Audio::AudioGraphNodePort DelayTime; // 0x30
        Audio::AudioGraphNodePort ModulationDepth; // 0x38
        Audio::AudioGraphNodePort ModulationFrequency; // 0x40
        Audio::SoundGraphPluginRef Plugin; // 0x48
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(FlangerNodeData) == 0x50);
}
#pragma pack(pop)