// Object: AudioEnvelopeAsset
// ClassId: 151
// RuntimeId: 41936
// TypeInfo: 0x0000000144DC1700
#include "../Core/Asset.h"
#include "../DiceCommonsShared/AudioEnvelope.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AudioEnvelopeAsset : public Core::Asset {
        DiceCommonsShared::AudioEnvelope Envelope; // 0x20
    }; // 0x30
    static_assert(sizeof(AudioEnvelopeAsset) == 0x30);
}
#pragma pack(pop)