// Object: VibratoNodeData
// ClassId: 1115
// RuntimeId: 25402
// TypeInfo: 0x0000000144E020F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class VibratoNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Float32 MaxModulationDepth; // 0x28
        Audio::AudioGraphNodePort ModulationDepth; // 0x2C
        Audio::AudioGraphNodePort ModulationFrequency; // 0x34
        Audio::SoundGraphPluginRef Plugin; // 0x3C
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(VibratoNodeData) == 0x40);
}
#pragma pack(pop)