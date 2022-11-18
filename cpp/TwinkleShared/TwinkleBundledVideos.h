// Object: TwinkleBundledVideos
// ClassId: 849
// RuntimeId: 46614
// TypeInfo: 0x0000000144F66B50
#include "../Core/Asset.h"
#include "../MovieBase/MovieTextureBaseAsset.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleBundledVideos : public Core::Asset {
        Array<MovieBase::MovieTextureBaseAsset> Movies; // 0x20
    }; // 0x28
    static_assert(sizeof(TwinkleBundledVideos) == 0x28);
}
#pragma pack(pop)