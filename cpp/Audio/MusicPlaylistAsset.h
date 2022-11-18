// Object: MusicPlaylistAsset
// ClassId: 588
// RuntimeId: 16328
// TypeInfo: 0x0000000144E1CF40
#include "../Audio/MusicBaseAsset.h"
#include "../Audio/MusicPlaylistType.h"
#include "../Audio/MusicAsset.h"
#include "../Audio/MusicPlaylistSelector.h"
#include "../Audio/SynchedFadeData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPlaylistAsset : public Audio::MusicBaseAsset {
        Audio::MusicPlaylistType PlaylistType; // 0x30
        char pad_0x34[0x4];
        Array<Audio::MusicAsset> Assets; // 0x38
        Array<Audio::MusicPlaylistSelector> Selectors; // 0x40
        Audio::SynchedFadeData Fade; // 0x48
        Float32 MinDelay; // 0x50
        Float32 MaxDelay; // 0x54
        Boolean Repeat; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(MusicPlaylistAsset) == 0x60);
}
#pragma pack(pop)