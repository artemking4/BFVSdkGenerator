// Object: FlatOutputNodeData
// ClassId: 1066
// RuntimeId: 13995
// TypeInfo: 0x0000000144E02F70
#include "../Audio/OutputNodeData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/OutputReverbMode.h"
#include "../Audio/SoundBusData.h"
#include "../Audio/PanSourcePositioning.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class FlatOutputNodeData : public Audio::OutputNodeData {
        Float32 WorldAngle; // 0x98
        Float32 Angle; // 0x9C
        Core::FloatCurve ReverbAttenuationCurve; // 0xA0
        Audio::AudioGraphNodePort ReverbGain; // 0xA8
        Audio::OutputReverbMode ReverbMode; // 0xB0
        char pad_0xB4[0x4];
        Audio::SoundBusData ReverbSend; // 0xB8
        Audio::AudioGraphNodePort CenterLevel; // 0xC0
        Audio::AudioGraphNodePort LfeLevel; // 0xC8
        Audio::PanSourcePositioning SourcePositioning; // 0xD0
        Boolean IsWorldAligned; // 0xD4
        Boolean ChannelBasedSpeakerAngles; // 0xD5
        Audio::SoundGraphPluginRef PanPlugin; // 0xD6
        Audio::SoundGraphPluginRef ReverbSendPlugin; // 0xD9
        char pad_0xDC[0x4];
    }; // 0xE0
    static_assert(sizeof(FlatOutputNodeData) == 0xE0);
}
#pragma pack(pop)