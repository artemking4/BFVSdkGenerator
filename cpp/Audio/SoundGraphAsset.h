// Object: SoundGraphAsset
// ClassId: 741
// RuntimeId: 23494
// TypeInfo: 0x0000000144E16840
#include "../Audio/SoundAsset.h"
#include "../Audio/SoundGraphData.h"
#include "../Audio/MixerAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundGraphAsset : public Audio::SoundAsset {
        Audio::SoundGraphData Graph; // 0x30
        Audio::MixerAsset Mixer; // 0x38
    }; // 0x40
    static_assert(sizeof(SoundGraphAsset) == 0x40);
}
#pragma pack(pop)