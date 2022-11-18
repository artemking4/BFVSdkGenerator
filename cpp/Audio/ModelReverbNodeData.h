// Object: ModelReverbNodeData
// ClassId: 1049
// RuntimeId: 45355
// TypeInfo: 0x0000000144E01F70
#include "../Audio/AudioGraphNodeData.h"
#include "../Global/Float32.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class ModelReverbNodeData : public Audio::AudioGraphNodeData {
        Float32 MaxSpaceSize; // 0x18
        Audio::AudioGraphNodePort In; // 0x1C
        Audio::AudioGraphNodePort Out; // 0x24
        Audio::AudioGraphNodePort ReverbTime; // 0x2C
        Audio::AudioGraphNodePort SpaceSize; // 0x34
        Audio::AudioGraphNodePort Brightness; // 0x3C
        Audio::SoundGraphPluginRef ReverbPlugin; // 0x44
        char pad_0x47[0x1];
    }; // 0x48
    static_assert(sizeof(ModelReverbNodeData) == 0x48);
}
#pragma pack(pop)