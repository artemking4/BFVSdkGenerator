// Object: ObjectOutputNodeData
// ClassId: 1067
// RuntimeId: 41707
// TypeInfo: 0x0000000144E02D70
#include "../Audio/OutputNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundBusPatchAsset.h"
#include "../Audio/PanSourcePositioning.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Audio/OutputReverbMode.h"
#include "../Audio/SoundBusData.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 16)
namespace Audio {
    class ObjectOutputNodeData : public Audio::OutputNodeData {
        Audio::AudioGraphNodePort PositionX; // 0x98
        Audio::AudioGraphNodePort PositionY; // 0xA0
        Audio::AudioGraphNodePort PositionZ; // 0xA8
        Audio::AudioGraphNodePort InnerAngle; // 0xB0
        Audio::AudioGraphNodePort OuterAngle; // 0xB8
        Audio::AudioGraphNodePort Size; // 0xC0
        Audio::SoundBusPatchAsset ObjectPatch; // 0xC8
        Core::Vec3 Direction; // 0xD0
        Audio::PanSourcePositioning SourcePositioning; // 0xE0
        Float32 OutsideGain; // 0xE4
        Float32 BleedMinDistance; // 0xE8
        Float32 BleedMaxDistance; // 0xEC
        Float32 MaxSpreadAtMinBleedDistance; // 0xF0
        Audio::AudioGraphNodePort ListenerInnerAngle; // 0xF4
        Audio::AudioGraphNodePort ListenerOuterAngle; // 0xFC
        Float32 ListenerOutsideGain; // 0x104
        Float32 HFDampingAngle; // 0x108
        Float32 ListenerHFDampingAngle; // 0x10C
        Core::FloatCurve ReverbAttenuationCurve; // 0x110
        Audio::AudioGraphNodePort ReverbGain; // 0x118
        Audio::OutputReverbMode ReverbMode; // 0x120
        char pad_0x124[0x4];
        Audio::SoundBusData ReverbSend; // 0x128
        Boolean ChannelBasedSpeakerAngles; // 0x130
        Audio::SoundGraphPluginRef ReverbSendPlugin; // 0x131
        Audio::SoundGraphPluginRef PanPlugin; // 0x134
        Audio::SoundGraphPluginRef ObjectSendPlugin; // 0x137
        char pad_0x13A[0x6];
    }; // 0x140
    static_assert(sizeof(ObjectOutputNodeData) == 0x140);
}
#pragma pack(pop)