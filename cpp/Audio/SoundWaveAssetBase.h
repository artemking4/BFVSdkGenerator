// Object: SoundWaveAssetBase
// ClassId: 751
// RuntimeId: 637
// TypeInfo: 0x0000000144E157C0
#include "../Audio/SoundDataAsset.h"
#include "../Audio/StreamPool.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundWaveAssetBase : public Audio::SoundDataAsset {
        Audio::StreamPool StreamPool; // 0x38
        Boolean PreferAvailableVariations; // 0x40
        Uint8 StreamingMode; // 0x41
        Uint8 VoicePriority; // 0x42
        Uint8 ChannelCount; // 0x43
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(SoundWaveAssetBase) == 0x48);
}
#pragma pack(pop)