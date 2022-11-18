// Object: MusicPlayerNodeConfigData
// ClassId: 931
// RuntimeId: 48660
// TypeInfo: 0x0000000144E1CCC0
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/MusicBaseAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPlayerNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Audio::MusicBaseAsset Asset; // 0x28
    }; // 0x30
    static_assert(sizeof(MusicPlayerNodeConfigData) == 0x30);
}
#pragma pack(pop)