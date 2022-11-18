// Object: AudioGraphAssetParameterConfigData
// ClassId: 1177
// RuntimeId: 48315
// TypeInfo: 0x0000000144E17840
#include "../Audio/AudioGraphParameterConfigData.h"
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphAssetParameterConfigData : public Audio::AudioGraphParameterConfigData {
        Core::Asset Asset; // 0x20
    }; // 0x28
    static_assert(sizeof(AudioGraphAssetParameterConfigData) == 0x28);
}
#pragma pack(pop)