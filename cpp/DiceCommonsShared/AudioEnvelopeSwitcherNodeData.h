// Object: AudioEnvelopeSwitcherNodeData
// ClassId: 957
// RuntimeId: 46948
// TypeInfo: 0x0000000144DC1580
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/AudioEnvelopeAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AudioEnvelopeSwitcherNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Index; // 0x18
        Audio::AudioGraphNodePort Advance; // 0x20
        Audio::AudioGraphNodePort AudioEnvelope; // 0x28
        Audio::AudioGraphNodePort IndexChanged; // 0x30
        Array<DiceCommonsShared::AudioEnvelopeAsset> AudioEnvelopes; // 0x38
        Float32 DefaultIndex; // 0x40
        Boolean IsRandom; // 0x44
        Boolean RandomStartIndex; // 0x45
        char pad_0x46[0x2];
    }; // 0x48
    static_assert(sizeof(AudioEnvelopeSwitcherNodeData) == 0x48);
}
#pragma pack(pop)