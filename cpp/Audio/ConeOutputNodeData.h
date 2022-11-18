// Object: ConeOutputNodeData
// ClassId: 1064
// RuntimeId: 64316
// TypeInfo: 0x0000000144E02E70
#include "../Audio/OutputNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Audio/PanSourcePositioning.h"
#include "../Global/Boolean.h"
#include "../Core/FloatCurve.h"
#include "../Audio/OutputReverbMode.h"
#include "../Audio/SoundBusData.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 16)
namespace Audio {
    class ConeOutputNodeData : public Audio::OutputNodeData {
        Audio::AudioGraphNodePort PositionX; // 0x98
        Audio::AudioGraphNodePort PositionY; // 0xA0
        Audio::AudioGraphNodePort PositionZ; // 0xA8
        Audio::AudioGraphNodePort InnerAngle; // 0xB0
        Audio::AudioGraphNodePort OuterAngle; // 0xB8
        Float32 OutsideGain; // 0xC0
        Float32 PanSize; // 0xC4
        Float32 BleedMinDistance; // 0xC8
        char pad_0xCC[0x4];
        Core::Vec3 Direction; // 0xD0
        Float32 BleedMaxDistance; // 0xE0
        Audio::AudioGraphNodePort ListenerInnerAngle; // 0xE4
        Audio::AudioGraphNodePort ListenerOuterAngle; // 0xEC
        Float32 ListenerOutsideGain; // 0xF4
        Audio::AudioGraphNodePort CenterLevel; // 0xF8
        Audio::AudioGraphNodePort LfeLevel; // 0x100
        Audio::PanSourcePositioning SourcePositioning; // 0x108
        Float32 HFDampingAngle; // 0x10C
        Float32 ListenerHFDampingAngle; // 0x110
        char pad_0x114[0x4];
        Core::FloatCurve ReverbAttenuationCurve; // 0x118
        Audio::AudioGraphNodePort ReverbGain; // 0x120
        Audio::OutputReverbMode ReverbMode; // 0x128
        char pad_0x12C[0x4];
        Audio::SoundBusData ReverbSend; // 0x130
        Boolean ChannelBasedSpeakerAngles; // 0x138
        Audio::SoundGraphPluginRef PanPlugin; // 0x139
        Audio::SoundGraphPluginRef ReverbSendPlugin; // 0x13C
        char pad_0x13F[0x1];
    }; // 0x140
    static_assert(sizeof(ConeOutputNodeData) == 0x140);
}
#pragma pack(pop)