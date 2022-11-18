// Object: MixerEntryConfig
// ClassId: 4302
// RuntimeId: 5878
// TypeInfo: 0x0000000144E17040
#include "../Core/DataContainer.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/MixerAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerEntryConfig : public Core::DataContainer {
        Audio::AudioGraphParameter GraphParameter; // 0x18
        Audio::MixerAsset Mixer; // 0x20
    }; // 0x28
    static_assert(sizeof(MixerEntryConfig) == 0x28);
}
#pragma pack(pop)