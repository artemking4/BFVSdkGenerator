// Object: AudioEnvelopeSwitcherNodeConfigData
// ClassId: 924
// RuntimeId: 38781
// TypeInfo: 0x0000000144DC1600
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../DiceCommonsShared/AudioEnvelopeAsset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AudioEnvelopeSwitcherNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<DiceCommonsShared::AudioEnvelopeAsset> AudioEnvelopes; // 0x28
    }; // 0x30
    static_assert(sizeof(AudioEnvelopeSwitcherNodeConfigData) == 0x30);
}
#pragma pack(pop)