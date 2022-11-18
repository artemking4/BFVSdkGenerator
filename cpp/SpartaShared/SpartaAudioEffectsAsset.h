// Object: SpartaAudioEffectsAsset
// ClassId: 755
// RuntimeId: 14886
// TypeInfo: 0x0000000144F4F7C0
#include "../Core/Asset.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaAudioEffectsAsset : public Core::Asset {
        Audio::SoundAsset ClickSound; // 0x20
        Audio::SoundAsset MouseOverSound; // 0x28
        Audio::SoundAsset MenuOpenedSound; // 0x30
        Audio::SoundAsset MenuClosedSound; // 0x38
    }; // 0x40
    static_assert(sizeof(SpartaAudioEffectsAsset) == 0x40);
}
#pragma pack(pop)