// Object: MusicAsset
// ClassId: 587
// RuntimeId: 9223
// TypeInfo: 0x0000000144E1D040
#include "../Audio/MusicBaseAsset.h"
#include "../Global/Uint32.h"
#include "../Audio/MusicMetadataBase.h"
#include "../Audio/MusicStreamableData.h"
#include "../Audio/MusicOverlayData.h"
#include "../Audio/MusicSelectorBase.h"
#include "../Audio/MusicTransition.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicAsset : public Audio::MusicBaseAsset {
        Uint32 NameHash; // 0x30
        char pad_0x34[0x4];
        Audio::MusicMetadataBase Metadata; // 0x38
        Uint32 BeatsPerMinute; // 0x40
        Uint32 BeatsPerBar; // 0x44
        Array<Audio::MusicStreamableData> Playables; // 0x48
        Array<Audio::MusicOverlayData> Overlays; // 0x50
        Array<Audio::MusicSelectorBase> Selectors; // 0x58
        Audio::MusicSelectorBase DefaultSelector; // 0x60
        Array<Audio::MusicTransition> FallbackTransitions; // 0x68
        Uint8 VoicePriority; // 0x70
        char pad_0x71[0x7];
    }; // 0x78
    static_assert(sizeof(MusicAsset) == 0x78);
}
#pragma pack(pop)