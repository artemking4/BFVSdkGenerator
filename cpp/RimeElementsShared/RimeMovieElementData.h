// Object: RimeMovieElementData
// ClassId: 3695
// RuntimeId: 49048
// TypeInfo: 0x0000000144F2A220
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeMovieElementData : public RimeElementsShared::RimeElementBaseData {
        MovieBase::MovieTextureBaseAsset Movie; // 0x110
        Float32 Volume; // 0x118
        Boolean Loop; // 0x11C
        Boolean AutoStart; // 0x11D
        Boolean Preload; // 0x11E
        char pad_0x11F[0x1];
    }; // 0x120
    static_assert(sizeof(RimeMovieElementData) == 0x120);
}
#pragma pack(pop)