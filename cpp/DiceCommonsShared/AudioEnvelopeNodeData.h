// Object: AudioEnvelopeNodeData
// ClassId: 956
// RuntimeId: 10572
// TypeInfo: 0x0000000144DC1680
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/AudioEnvelope.h"
#include "../DiceCommonsShared/AudioEnvelopeAsset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AudioEnvelopeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort EnvelopeIn; // 0x20
        Audio::AudioGraphNodePort Y; // 0x28
        Audio::AudioGraphNodePort Region; // 0x30
        DiceCommonsShared::AudioEnvelope Envelope; // 0x38
        DiceCommonsShared::AudioEnvelopeAsset EnvelopeAsset; // 0x48
    }; // 0x50
    static_assert(sizeof(AudioEnvelopeNodeData) == 0x50);
}
#pragma pack(pop)