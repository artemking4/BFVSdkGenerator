// Object: MixerAsset
// ClassId: 571
// RuntimeId: 53315
// TypeInfo: 0x0000000144E16CC0
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Audio/MixerGraphData.h"
#include "../Audio/MixerPreset.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerAsset : public Core::Asset {
        Audio::MixerGraphData Graph; // 0x20
        Array<Audio::MixerPreset> Presets; // 0x28
        Audio::MixerPreset DefaultPreset; // 0x30
        Boolean Bypass; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(MixerAsset) == 0x40);
}
#pragma pack(pop)