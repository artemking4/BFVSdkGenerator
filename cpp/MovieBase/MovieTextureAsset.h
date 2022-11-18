// Object: MovieTextureAsset
// ClassId: 585
// RuntimeId: 37876
// TypeInfo: 0x0000000144EA3E70
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../MovieBase/MovieSubtitle.h"

#pragma pack(push, 8)
namespace MovieBase {
    class MovieTextureAsset : public MovieBase::MovieTextureBaseAsset {
        Guid ChunkGuid; // 0x20
        Uint32 ChunkSize; // 0x30
        Guid SubtitleChunkGuid; // 0x34
        Uint32 SubtitleChunkSize; // 0x44
        Array<MovieBase::MovieSubtitle> Subtitles; // 0x48
        Boolean HasLocalizedAudioTracks; // 0x50
        Boolean OverrideBackgroundMusic; // 0x51
        Boolean HasVp6; // 0x52
        Boolean HasVp8; // 0x53
        Boolean ForcePreloadEnable; // 0x54
        char pad_0x55[0x3];
    }; // 0x58
    static_assert(sizeof(MovieTextureAsset) == 0x58);
}
#pragma pack(pop)