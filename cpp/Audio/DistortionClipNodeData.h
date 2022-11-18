// Object: DistortionClipNodeData
// ClassId: 986
// RuntimeId: 60409
// TypeInfo: 0x0000000144E03D70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class DistortionClipNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort ClipLevel; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Audio::SoundGraphPluginRef Plugin; // 0x30
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(DistortionClipNodeData) == 0x38);
}
#pragma pack(pop)