// Object: WidgetMovieData
// ClassId: 916
// RuntimeId: 62071
// TypeInfo: 0x0000000144D9B410
#include "../Core/Asset.h"
#include "../MovieBase/MovieTextureBaseAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WidgetMovieData : public Core::Asset {
        MovieBase::MovieTextureBaseAsset Video; // 0x20
    }; // 0x28
    static_assert(sizeof(WidgetMovieData) == 0x28);
}
#pragma pack(pop)