// Object: Pan2dNodeData
// ClassId: 1069
// RuntimeId: 33630
// TypeInfo: 0x0000000144E02A70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Audio/Pan2dOutputChannelCount.h"
#include "../Audio/Pan2dNodeVersion.h"

#pragma pack(push, 8)
namespace Audio {
    class Pan2dNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::Pan2dOutputChannelCount OutputChannelCount; // 0x28
        Audio::AudioGraphNodePort PanAngle; // 0x2C
        Audio::AudioGraphNodePort PanDistance; // 0x34
        Audio::AudioGraphNodePort PanSize; // 0x3C
        Audio::AudioGraphNodePort PanTwist; // 0x44
        Audio::AudioGraphNodePort CenterAmplitude; // 0x4C
        Audio::AudioGraphNodePort MainAmplitude; // 0x54
        Audio::AudioGraphNodePort LfeAmplitude; // 0x5C
        Audio::Pan2dNodeVersion Version; // 0x64
        Audio::SoundGraphPluginRef Plugin; // 0x68
        char pad_0x6B[0x5];
    }; // 0x70
    static_assert(sizeof(Pan2dNodeData) == 0x70);
}
#pragma pack(pop)