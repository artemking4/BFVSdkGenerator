// Object: IrReverbNodeData
// ClassId: 1012
// RuntimeId: 59360
// TypeInfo: 0x0000000144E028F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class IrReverbNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort Reverb0; // 0x28
        Audio::AudioGraphNodePort Amplitude0; // 0x30
        Audio::AudioGraphNodePort EnvelopeType0; // 0x38
        Audio::AudioGraphNodePort EnvelopeStartLevel0; // 0x40
        Audio::AudioGraphNodePort EnvelopeLength0; // 0x48
        Audio::AudioGraphNodePort Reverb1; // 0x50
        Audio::AudioGraphNodePort Amplitude1; // 0x58
        Audio::AudioGraphNodePort EnvelopeType1; // 0x60
        Audio::AudioGraphNodePort EnvelopeStartLevel1; // 0x68
        Audio::AudioGraphNodePort EnvelopeLength1; // 0x70
        Float32 MaxReverbLength; // 0x78
        Audio::SoundGraphPluginRef ReverbPlugin; // 0x7C
        char pad_0x7F[0x1];
    }; // 0x80
    static_assert(sizeof(IrReverbNodeData) == 0x80);
}
#pragma pack(pop)