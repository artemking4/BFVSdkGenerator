// Object: MovieTexture2Asset
// ClassId: 584
// RuntimeId: 17818
// TypeInfo: 0x0000000144EA3DF0
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MovieBase {
    class MovieTexture2Asset : public MovieBase::MovieTextureBaseAsset {
        Guid ChunkGuid; // 0x20
        Uint32 ChunkSize; // 0x30
        Guid SubtitleChunkGuid; // 0x34
        Uint32 SubtitleChunkSize; // 0x44
        CString MovieFilename; // 0x48
        CString SubtitleFilename; // 0x50
        Boolean HasLocalizedAudioTracks; // 0x58
        Boolean Flipped; // 0x59
        char pad_0x5A[0x6];
    }; // 0x60
    static_assert(sizeof(MovieTexture2Asset) == 0x60);
}
#pragma pack(pop)